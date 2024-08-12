/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 06:13:21 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/08/12 15:53:06 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Harl.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    std::string level(argv[1]);
    Harl myHarl;

    myHarl.filter(level);
    return 0;
}
