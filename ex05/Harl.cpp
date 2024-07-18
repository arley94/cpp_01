/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:22:00 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/30 19:31:09 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void Harl::debug( void )
{
	std::cout << "DEBUG" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING" << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	harl_f f_array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*f_array[i])();
	}
}