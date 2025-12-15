/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:22:32 by omizin            #+#    #+#             */
/*   Updated: 2025/12/15 17:25:23 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printAny(T const &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
	x++;
}

int	main()
{
	std::cout << "Testing increment functions with value 1,2,3\n" << std::endl;
	{
		int arr[3] = {1, 2 ,3};
		iter(arr, 3, increment);

		int len = sizeof(arr) / sizeof(arr[0]);

		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
	}
	std::cout << "\nTesting print functions with value 1,2,3\n" << std::endl;
	{
		const int arr[3] = {1, 2, 3};
		iter(arr, 3, printAny);
	}
	std::cout << "\nTesting string array\n" << std::endl;
	{
		std::string arr[3] = {"Hello", "World", "!"};
		iter(arr, 3, printAny);
	}
	std::cout << "\nTesting float array\n" << std::endl;
	{
		float arr[3] = {2.5, -7.2, 6.3};
		iter(arr, 3, increment);

		int len = sizeof(arr) / sizeof(arr[0]);

		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
	}
}
