/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/06 20:50:34 by shogura          ###   ########.fr       */
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

	Fixed& operator=(const Fixed &);
	Fixed operator+(const Fixed &);
	Fixed operator-(const Fixed &);
	Fixed operator*(const Fixed &);
	Fixed operator/(const Fixed &);

	Fixed& operator ++(void);
	Fixed operator ++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	static Fixed&  min(Fixed&, Fixed&);
	static const Fixed&  min(const Fixed &, const Fixed &);
	static Fixed&  max(Fixed &, Fixed &);
	static const Fixed&  max(const Fixed &, const Fixed &);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _val;
	static const int _bits;
};

std::ostream &operator<<(std::ostream &, const Fixed &);
#endif
