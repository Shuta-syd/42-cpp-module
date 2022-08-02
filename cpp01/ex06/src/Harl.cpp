/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:24:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/02 20:25:57 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl()
{
}

Harl::~Harl()
{
}

static int get_filter_id(const std::string *levels, std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	std::cout << "[Probably complaining about insignificant problems]"
			  << std::endl;
	std::exit(1);
	return (-1);
}


void Harl::complain(std::string level)
{
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int id = get_filter_id(levels, level);

	switch (id)
	{
	case 0:
		this->debug();
		this->info();
		this->warning();
		this->error();
		break;
	case 1:
		this->info();
		this->warning();
		this->error();
		break;
	case 2:
		this->warning();
		this->error();
		break;
	default:
		this->error();
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-"
				 "pickle-specialketchup burger. I really do !\n"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl
			  << "I cannot believe adding extra bacon costs more money.\n"
				 " You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\n"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl
			  << "I think I deserve to have some extra bacon for free.\n"
				 "I've been coming for years whereas you started working here since last month.\n"
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl
			  << "This is unacceptable ! I want to speak to the manager now.\n"
			  << std::endl;
}
