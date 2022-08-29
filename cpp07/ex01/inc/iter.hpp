/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:32:48 by shogura           #+#    #+#             */
/*   Updated: 2022/08/29 20:28:22 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ITER_HPP)
#define ITER_HPP

template <typename T>
void iter(T *arr, int size, void (*fnc)(const T&))
{
	int i = 0;

	if (!arr || !size || !fnc)
		return ;
	while (i < size)
		fnc(arr[i++]);
}

#endif // ITER_HPP
