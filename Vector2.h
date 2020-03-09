//
//  Vector2.h
//
//  A class to represent a 2D position using Cartesian
//    coordinates using signed integers.
//

#pragma once

#include <cmath>
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include<string>
using namespace std;

template <typename ItemType>
class Vector2
{
public:
	Vector2();
	Vector2(const ItemType& x1, const ItemType& y1);
	Vector2(const Vector2<ItemType>& original);
	~Vector2();
	Vector2<ItemType>& operator= (const Vector2 <ItemType>& original);
	bool operator== (const Vector2 <ItemType>& other) const;
	Vector2<ItemType> operator+ (const Vector2<ItemType>& addend) const;
	Vector2<ItemType> operator- (const Vector2<ItemType>& subtrahend) const;
	float getNorm() const;

	ItemType x;
	ItemType y;
};

