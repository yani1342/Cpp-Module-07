/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymsa <ymsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:22:03 by ymsa              #+#    #+#             */
/*   Updated: 2026/05/08 18:22:03 by ymsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <iostream>

#include "Array.hpp"

int main()
{
    // ===== INT TESTS =====
    Array<int> empty;
    std::cout << "empty array size: " << empty.size() << std::endl;

    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i * 10;
    std::cout << "array of 5 ints:" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;

    // deep copy test
    Array<int> copy(arr);
    copy[0] = 999;
    std::cout << "original arr[0]: " << arr[0] << std::endl;
    std::cout << "copy copy[0]: " << copy[0] << std::endl;

    // operator= test
    Array<int> assigned;
    assigned = arr;
    assigned[1] = 888;
    std::cout << "original arr[1]: " << arr[1] << std::endl;
    std::cout << "assigned[1]: " << assigned[1] << std::endl;

    // out of bounds test
    try {
        std::cout << arr[999] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "exception caught: index out of bounds" << std::endl;
    }

    // ===== FLOAT TESTS =====
    std::cout << "\n--- float tests ---" << std::endl;
    Array<float> floats(4);
    floats[0] = 1.1f;
    floats[1] = 2.2f;
    floats[2] = 3.3f;
    floats[3] = 4.4f;
    std::cout << "array of 4 floats:" << std::endl;
    for (unsigned int i = 0; i < floats.size(); i++)
        std::cout << floats[i] << std::endl;

    // deep copy test with floats
    Array<float> floatsCopy(floats);
    floatsCopy[0] = 9.9f;
    std::cout << "original floats[0]: " << floats[0] << std::endl;
    std::cout << "copy floatsCopy[0]: " << floatsCopy[0] << std::endl;

    // out of bounds test with floats
    try {
        std::cout << floats[10] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "exception caught: index out of bounds" << std::endl;
    }

    // ===== STRING TESTS =====
    std::cout << "\n--- string tests ---" << std::endl;
    Array<std::string> strs(3);
    strs[0] = "hello";
    strs[1] = "the";
    strs[2] = "world";
    for (unsigned int i = 0; i < strs.size(); i++)
        std::cout << strs[i] << std::endl;

    // deep copy test with strings
    Array<std::string> strsCopy(strs);
    strsCopy[0] = "goodbye";
    std::cout << "original strs[0]: " << strs[0] << std::endl;
    std::cout << "copy strsCopy[0]: " << strsCopy[0] << std::endl;

    return 0;
}