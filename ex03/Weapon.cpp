/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:23:37 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/04 08:52:51 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
: _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}