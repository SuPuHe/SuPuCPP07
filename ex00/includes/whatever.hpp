/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:21:10 by omizin            #+#    #+#             */
/*   Updated: 2025/12/15 13:29:13 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap(T &a, T&b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T const &a, T const &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T const &a, T const &b)
{
	if (a <= b)
		return b;
	else
		return a;
}
