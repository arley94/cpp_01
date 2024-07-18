/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:31:25 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/04 09:30:12 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon& weapon)
: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	if (this->_weapon.getType() != "") 
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	else 
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}