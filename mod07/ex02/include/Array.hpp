/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:24:09 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/11 14:26:11 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>
#include <stdexcept>

template <typename T> class Array
{
  public:
    Array(void);
    Array(unsigned int n);
    Array(const Array &other);
    ~Array(void);

    Array &operator=(const Array &other);
    T &operator[](unsigned int n);

    unsigned int size(void);

  private:
    T *_array;
    unsigned int _size;
};

template <typename T> Array<T>::Array(void) : _array(NULL), _size(0)
{
}

template <typename T> Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T> Array<T>::Array(const Array &other) : _array(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < other._size; i++)
    {
        _array[i] = other._array[i];
    }
}

template <typename T> Array<T>::~Array(void)
{
    delete[] _array;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
    delete[] _array;
    _size = other._size;
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
    {
        _array[i] = other._array[i];
    }
    return (*this);
}

template <typename T> T &Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
        throw std::out_of_range("Index out of bounds");
    return (*(_array + n));
}

template <typename T> unsigned int Array<T>::size(void)
{
    return (_size);
}
