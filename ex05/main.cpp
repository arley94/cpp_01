/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:21:43 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/30 19:25:46 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl myHarl;
	for (int i = 0; i < 4; i++)
	{
		myHarl.complain(levels[i]);
	}
	return 0;
}
