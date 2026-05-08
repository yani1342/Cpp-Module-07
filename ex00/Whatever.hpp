/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:16:13 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/07 17:16:13 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATERVER_HPP

#include <iostream>
#include <ostream>

template <typename T>
void    swap(T &a, T &b){
    T c;

    c = a;
    a = b;
    b = c;
}

template <typename T>
T min(const T &a, const T &b)
{
    if (a >= b)
        return(b);
    return(a);
}

template <typename T>
T max(const T &a, const T &b)
{
    if (a >= b)
        return(a);
    return(b);
}

#endif