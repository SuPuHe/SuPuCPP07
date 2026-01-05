/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:29:28 by omizin            #+#    #+#             */
/*   Updated: 2026/01/05 13:37:14 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

template <typename T>
class Array
{
	private:
		T*				_data;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &copy);
		~Array();

		T &operator[](unsigned int index);
		T const &operator[](unsigned int index) const;

		unsigned int	size() const;
};

#include "Array.tpp"
