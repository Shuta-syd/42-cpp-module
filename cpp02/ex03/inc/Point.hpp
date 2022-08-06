/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:42:36 by shogura           #+#    #+#             */
/*   Updated: 2022/08/06 23:46:59 by shogura          ###   ########.fr       */
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
	float get_x(void) const ;
	float get_y(void) const;
	~Point();

	Point &operator=(const Point &);

private:
	const Fixed _x;
	const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &, const Point &);

#endif // POINT_HPP
