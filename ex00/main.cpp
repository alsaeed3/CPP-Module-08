/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:04:24 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/06 18:52:18 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
		d.push_back(i);
	}

	try {

		std::cout << *easyfind(v, 5) << std::endl;
	} catch( const std::exception &e ) {

		std::cerr << e.what() << std::endl;
	} try {

		std::cout << *easyfind(l, 20) << std::endl;
	} catch( const std::exception &e ) {

		std::cerr << e.what() << std::endl;
	} try {

		std::cout << *easyfind(d, -1) << std::endl;
	} catch( const std::exception &e ) {

		std::cerr << e.what() << std::endl;
	}

	return 0;
}