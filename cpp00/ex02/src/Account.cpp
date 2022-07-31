/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:50:21 by shogura           #+#    #+#             */
/*   Updated: 2022/07/31 15:17:05 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts), _amount(initial_deposit),
	  _nbDeposits(0), _nbWithdrawals(0)
{
}

Account::~Account(void)
{
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
}

void Account::_displayTimestamp(void)
{
	time_t now = time(NULL);
	struct tm *time = localtime(&now);
	char buf[20];

	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", time);
	std::cout << buf;
}
