/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:42:42 by shogura           #+#    #+#             */
/*   Updated: 2022/08/06 23:00:38 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const Point &cp) : _x(cp._x), _y(cp._y)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &point)
{
	(void)point;
	return *this;
}

float Point::get_x(void) const
{
	return this->_x.getRawBits();
}

float Point::get_y(void) const
{
	return this->_y.getRawBits();
}
