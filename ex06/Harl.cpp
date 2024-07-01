/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-01 05:31:24 by acoto-gu          #+#    #+#             */
/*   Updated: 2024-07-01 05:31:24 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void) const
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void) const
{
	std::cout << "ERROR" << std::endl;
}

void Harl::filter(const std::string &level) const
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (levels[i] != level && i < 5)
		i++;

	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			break;
	}
}


