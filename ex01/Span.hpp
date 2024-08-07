/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:59:59 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/06 21:07:15 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
	private:
	
		unsigned int		_N;
		std::vector<int>	_nums;

	public:

		Span( unsigned int N );
		Span( Span const & src );
		Span &operator=( Span const & src );
		~Span( void );

		void			addNumber( int num );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		
};

#endif // SPAN_HPP