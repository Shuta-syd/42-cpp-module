/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:24:32 by shogura           #+#    #+#             */
/*   Updated: 2022/08/02 14:50:29 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_STR_HPP
#define REPLACE_STR_HPP

#include <string>
#include <iostream>
#include <fstream>

class ReplaceStr
{
public:
	ReplaceStr(std::string, std::string);
	ReplaceStr();
	~ReplaceStr();
	void replace(std::ifstream&, std::ofstream&);

private:
	std::string _before;
	std::string _after;
};
#endif
