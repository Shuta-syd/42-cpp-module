/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:36:51 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 00:37:28 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

float ft_vector(Point const &a, Point const &b, Point const &p)
{
	float x;
	float y;

	x = (a.get_x()  - p.get_x()) * (b.get_y() - p.get_y());
	y = (b.get_x() - p.get_x()) * (a.get_y() - p.get_y());

	return (x - y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float z1, z2, z3;
	bool neg, pos;

	z1 = ft_vector(a, b, point);
	z2 = ft_vector(b, c, point);
	z3 = ft_vector(c, a, point);

	neg = z1 < 0 || z2 < 0 || z3 < 0;
	pos = z1 > 0 || z2 > 0 || z3 > 0;

	return !(neg && pos);
}
