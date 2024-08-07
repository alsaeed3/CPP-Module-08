/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:09:40 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/06 19:04:33 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span {

    private:

        unsigned int N;
        std::vector<int> numbers;

    public:

        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int num);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        template <typename Iterator>
        void addRange(Iterator begin, Iterator end) {

            while (begin != end) {

                addNumber(*begin);
                ++begin;
            }
        }
};

#endif // SPAN_HPP
