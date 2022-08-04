/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/04 22:37:28 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int);
	Fixed(float);
	Fixed(const Fixed &);
	~Fixed();

	float toFloat(void) const;

	bool operator>(const Fixed &);
	bool operator<(const Fixed &);
	bool operator>=(const Fixed &);
	bool operator<=(const Fixed &);
	bool operator==(const Fixed &);
	bool operator!=(const Fixed &);

	Fixed& operator+(const Fixed &);
	Fixed& operator-(const Fixed &);
	Fixed& operator*(const Fixed &);
	Fixed& operator/(const Fixed &);

	Fixed& operator ++(void);
	Fixed operator ++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	static Fixed&  min(Fixed&, Fixed&);
	static Fixed&  mix(const Fixed &, const Fixed &);
	static Fixed&  max(Fixed &, Fixed &);
	static Fixed&  max(const Fixed &, const Fixed &);

private:
	int _val;
	static const int _bits;
};

std::ostream &operator<<(std::ostream &, const Fixed &);
#endif
