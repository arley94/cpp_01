/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:55:08 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/30 16:16:48 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filter.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Incorrect number of arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	Filter	f1(argv[1]);
	f1.replace(s1, s2);
	return 0;
}
