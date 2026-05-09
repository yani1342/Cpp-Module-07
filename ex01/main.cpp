/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:37:25 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/07 19:37:25 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

template <typename T>
void doubleElem(T &elem)
{
    elem = elem * 2;
}

template <typename T>
void printElem(T const &elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    // test non-const : on modifie le tableau
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "before double:" << std::endl;
    iter(arr, 5, printElem<int>);
    iter(arr, 5, doubleElem<int>);
    std::cout << "after double:" << std::endl;
    iter(arr, 5, printElem<int>);

    const int ctab[] = {10, 20, 30};
    std::cout << "const array:" << std::endl;
    iter(ctab, 3, printElem<int>);


    const std::string strs[] = {"winter", "is", "coming"};
    iter(strs, 3, printElem<std::string>);

    return 0;
}
