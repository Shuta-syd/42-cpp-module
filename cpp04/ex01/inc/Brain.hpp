/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:06:51 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 20:09:45 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain&);
	~Brain();

	Brain &operator=(const Brain &);

private:
	std::string ideas[100];
};

#endif // BRAIN_HPP
