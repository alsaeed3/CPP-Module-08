/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:11:33 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/05 18:11:38 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main() {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Test with 10,000 numbers
    Span bigSpan(10000);
    std::vector<int> bigVector;
    
    srand(time(NULL));
    for (int i = 0; i < 10000; ++i) {
        bigVector.push_back(rand());
    }
    bigSpan.addRange(bigVector.begin(), bigVector.end());

    std::cout << "Shortest span in big span: " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Longest span in big span: " << bigSpan.longestSpan() << std::endl;

    return 0;
}
