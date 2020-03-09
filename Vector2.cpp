//
//  Vector2.cpp
//

#include <cmath>
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include<string>

#include "Vector2.h"

using namespace std;

template<typename ItemType>
Vector2<ItemType>::Vector2()
	: x(), y()
{
}
template <typename ItemType>
Vector2<ItemType>::Vector2(const ItemType& x1, const ItemType& y1)
	: x(x1), y(y1)
{
}
template <typename ItemType>

Vector2<ItemType>::Vector2(const Vector2<ItemType>& original)
	: x(original.x), y(original.y)
{
}



template <typename ItemType>
Vector2<ItemType>& Vector2<ItemType> :: operator= (const Vector2<ItemType>& original)
{
	if (&original != this)
	{
		x = original.x;
		y = original.y;
	}
	return *this;
}

template <typename ItemType>
Vector2<ItemType> ::~Vector2()
{

}


template <typename ItemType>
bool Vector2<ItemType>::operator== (const Vector2<ItemType>& other) const
{
	return (x == other.x && y == other.y);
}

template <typename ItemType>
Vector2<ItemType> Vector2<ItemType> ::operator+ (const Vector2<ItemType>& addend) const
{
	return Vector2(x + addend.x, y + addend.y);
}

template <typename ItemType>
Vector2<ItemType> Vector2<ItemType> :: operator- (const Vector2<ItemType>& subtrahend) const
{
	return Vector2(x - subtrahend.x, y - subtrahend.y);
}

template <typename ItemType>
float Vector2<ItemType>::getNorm() const
{
	float x_sqr = (float)x * (float)x;
	float y_sqr = (float)y * (float)y;
	return sqrt(x_sqr + y_sqr);
}

template class Vector2 <int>;
template class Vector2 <char>;
template class Vector2 <double>;
template class Vector2 <float>;
