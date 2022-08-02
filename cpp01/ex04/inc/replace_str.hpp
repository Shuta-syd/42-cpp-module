/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:24:32 by shogura           #+#    #+#             */
/*   Updated: 2022/08/01 11:09:29 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_STR_HPP
#define REPLACE_STR_HPP

#include <string>
#include <iostream>
#include <fstream>

class replace_str
{
public:
	replace_str(std::string, std::string);
	replace_str();
	~replace_str();
	bool empty(void);
	void replace(std::fstream, std::fstream);

private:
	std::string _before;
	std::string _after;
};
#endif
