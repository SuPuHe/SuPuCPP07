/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:54:40 by omizin            #+#    #+#             */
/*   Updated: 2025/12/16 13:02:11 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array& copy) : _data(NULL), _size(0)
{
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this != &copy)
	{
		delete[] _data;
		_size = copy._size;
		_data = new T[_size];

		for (unsigned int i = 0; i < _size; i++)
			_data[i] = copy._data[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return _data[index];
}

template <typename T>
T const& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::exception();
	return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const { return _size; }
