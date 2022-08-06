/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:42:36 by shogura           #+#    #+#             */
/*   Updated: 2022/08/06 23:00:49 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(POINT_HPP)
#define POINT_HPP

#include <Fixed.hpp>

class Point
{
public:
	Point();
	Point(const Point &);
	Point(const float, const float);
	Point(const int, const int);
	float get_x(void) const ;
	float get_y(void) const;
	~Point();

	Point &operator=(const Point &);

private:
	const Fixed _x;
	const Fixed _y;
};

#endif // POINT_HPP
