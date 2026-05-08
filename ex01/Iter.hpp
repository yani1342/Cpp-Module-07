/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:20:07 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/07 17:20:07 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

//tableau non-const + fonction non-const
// → je veux lire ET modifier
template <typename T>
void iter(T *array, const int len, void (*func)(T &)){
    for (int i = 0; i < len; i++)
        func(array[i]);
}

//tableau const + fonction const → je veux juste lire
template <typename T>
void iter(const T *array, const int len, void (*func)(const T &)){
    for (int i = 0; i < len; i++)
        func(array[i]);
}

// la surcharge — même nom, comportement différent selon le contexte

#endif