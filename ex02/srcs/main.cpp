/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:29:26 by omizin            #+#    #+#             */
/*   Updated: 2025/12/16 14:01:05 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << CYAN << "Empty array test\n" << RESET << std::endl;
	{
		Array<int> a;
		std::cout << "Size: " << a.size() << std::endl;

		try
		{
			std::cout << a[0] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << RED << "Exception caught (access out of bounds)" << RESET << std::endl;
		}
	}

	std::cout << CYAN << "\nArray with size test\n" << RESET << std::endl;
	{
		Array<int> a(5);
		std::cout << "Size: " << a.size() << std::endl;

		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}

	std::cout << CYAN << "\nCheck operator [] test\n"<< RESET << std::endl;
	{
		Array<int> a(3);
		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = static_cast<int>(i * 10);

		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}

	std::cout <<CYAN  << "\nCheck out of bounds exception test\n" << RESET << std::endl;
	{
		Array<int> a(3);

		try
		{
			std::cout << a[5] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << RED << "Exception caught (index >= size)" << RESET << std::endl;
		}
	}

	std::cout << CYAN << "\nCheck copy constructor test\n"<< RESET << std::endl;
	{
		Array<int> a(3);
		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = i + 1;

		Array<int> b(a);

		b[0] = 100;

		std::cout << "Original array:" << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		std::cout << "Copied array:" << std::endl;
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}

	std::cout << CYAN << "\nAssigment operator test\n" << RESET << std::endl;
	{
		Array<int> a(3);
		Array<int> b(5);

		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = i;

		b = a;

		b[1] = 42;

		std::cout << "Array a:" << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		std::cout << "Array b:" << std::endl;
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}

	std::cout <<CYAN << "\nConst array test\n" << RESET << std::endl;
	{
		const Array<int> a(3);

		std::cout << "Size: " << a.size() << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}

	std::cout << CYAN << "\nArray with another data type test\n" << RESET << std::endl;
	{
		Array<std::string> a(3);

		a[0] = "Hello";
		a[1] = "World";
		a[2] = "!";

		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	return 0;
}
