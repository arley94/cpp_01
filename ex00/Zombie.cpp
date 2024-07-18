/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:50:12 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/03 14:09:48 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string &name)
: name(name)
{
}

Zombie::~Zombie()
{
	std::cout << name << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}