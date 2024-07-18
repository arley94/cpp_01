/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:07 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/04 09:26:00 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
: _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}

void	HumanB::setWeapon(const Weapon &newWeapon)
{
	_weapon = &newWeapon;
}