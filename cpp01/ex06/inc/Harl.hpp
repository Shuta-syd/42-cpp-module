/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:24:48 by shogura           #+#    #+#             */
/*   Updated: 2022/08/02 20:24:20 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
