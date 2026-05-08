/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 20:17:50 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/07 20:17:50 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>
#include <iostream>

template <typename T>
class Array{

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();

        T &operator[](unsigned int index);
        unsigned int size() const;
    
    private:
        T *_data;
        unsigned int _size;
};


//crée un tableau vide
template <typename T>
Array<T>::Array() : _data(NULL), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n){
    _data = new T[n];// alloue un tableau de n éléments
}

// alloue un nouveau tableau et copie les valeurs une par une.
// Si tu copies juste le pointeur, 
// les deux objets pointent vers la même mémoire (dangereux)
template <typename T>
Array<T>::Array(const Array &other) : _size(other._size){//_size(other._size) initialise _size avec la taille de other
    _data = new T[_size];

    for (unsigned int i = 0; i < _size; i++)
        _data[i] = other._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
    if (this == &other)
        return *this;
    delete[] _data;

    _size = other._size;
    _data = new T[_size];

    for (unsigned int i = 0; i < _size; i++)
        _data[i] = other._data[i];
    return *this;
}

// operator[] - accès à un élément
template <typename T> //on retourne une référence sur l'élément pour pouvoir faire arr[0] = 42
T &Array<T>::operator[](unsigned int index) {
    if (index >= _size)      // si l'index est hors limites
        throw std::exception(); // on lance une exception
    return _data[index];     // sinon on retourne l'élément
}

// size() - retourne la taille du tableau
template <typename T>
unsigned int Array<T>::size() const {
    return _size; // on retourne simplement _size
}

template <typename T>
Array<T>::~Array(){
    delete[] _data;
}

#endif