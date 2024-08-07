/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:04:11 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/06 18:40:26 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyfind( T& container, int val ) {

	typename T::iterator	it = std::find( container.begin(), \
											container.end(), \
											val );
	if ( it == container.end() ) {

		throw std::runtime_error( "Value not found in container" );
	}
	return it;
}

#endif // EASYFIND_HPP