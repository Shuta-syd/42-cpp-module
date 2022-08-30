/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:31:06 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 14:31:50 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
private:
	T *arr_;
	uint n_;

public:
	Array() : arr_(new T[0]), n_(0) { std::cout << "Default Constructor " << std::endl; }

	Array(uint n) : n_(n) {
		arr_ = new T(n_);
		std::cout << "Default Constructor " << std::endl;
	}

	Array(Array const &other) {
		*this = other;
		std::cout << "Copy Constructor" << std::endl;
	}

	~Array() {
		delete[] arr_;
		std::cout << "Destructor" << std::endl;
		}

	class accessOut : public std::exception{
		const char *what() const throw(){
			return "[Exception] this index is out of range" << std::endl;
		}
	}

	Array &operator=(Array const &other){
		delete[] arr_;
		n_ = other.n_;
		if (n_ > 0)
		{
			arr_ = new T[n_];
			for (size_t i = 0; i < n_; i++)
				arr_[i] = other.arr_[i];
		}
		return *this;
	}

	T &operator[](uint i) const {
		if (i >= n_)
			throw(accessOut());
		return arr_[i];
	}
	
};

#endif // ARRAY_HPP
