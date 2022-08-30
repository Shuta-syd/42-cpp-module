/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:38:48 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 16:24:17 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator
easyfind(T &container, int nm) {
	return std::find(container.begin(), container.end(), nm);
}

#endif // EASYFIND_HPP
