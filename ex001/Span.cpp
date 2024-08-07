/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:11:04 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/05 18:11:15 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        N = other.N;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (numbers.size() >= N) {
        throw std::runtime_error("Span is full");
    }
    numbers.push_back(num);
}

unsigned int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find span");
    }

    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (std::vector<int>::iterator it = sorted.begin() + 1; it != sorted.end(); ++it) {
        unsigned int span = static_cast<unsigned int>(*it - *(it - 1));
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

unsigned int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find span");
    }

    std::vector<int>::const_iterator min = std::min_element(numbers.begin(), numbers.end());
    std::vector<int>::const_iterator max = std::max_element(numbers.begin(), numbers.end());
    return static_cast<unsigned int>(*max - *min);
}
