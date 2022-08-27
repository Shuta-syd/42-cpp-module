/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:21:57 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 22:31:40 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a > b || a == b)
		return b;
	return a;
}

template <typename T>
T max(T a, T b)
{
	if (a < b || a == b)
		return b;
	return a;
}

#endif // WHATEVER_HPP
