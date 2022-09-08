/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:59:23 by shogura           #+#    #+#             */
/*   Updated: 2022/09/08 21:57:09 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANTSTACK_HPP)
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>(){};
	MutantStack(const MutantStack &other){
		*this = other;
	};
	~MutantStack(){};

	MutantStack &operator=(const MutantStack &other){
		this->c = other.c;
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){return this->c.begin();}
	iterator end(){return this->c.end();}

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const {return this->c.begin();}
	const_iterator end() const {return this->c.end();}

private:
};

#endif // MUTANTSTACK_HPP

/*
	@iterator vs const_iterator
	https://jumble-note.blogspot.com/2014/12/c-constiterator.html
*/
