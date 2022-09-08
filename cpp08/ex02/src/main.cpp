/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:26:45 by shogura           #+#    #+#             */
/*   Updated: 2022/09/08 21:54:43 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <iostream>
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top -> " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size -> " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "top -> " << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "size -> " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::const_iterator it = mstack.begin();
		std::list<int>::const_iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}

	{
		MutantStack<int> mstack;
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		std::cout << "begin->" << *it << std::endl;
		std::cout << "end->" << *(ite - 1) << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
