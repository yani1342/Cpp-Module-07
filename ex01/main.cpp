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
void printElem(T &elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, printElem<int>);

    std::string strs[] = {"hello", "word"};
    iter(strs, 2, printElem<std::string>);

    return 0;
}