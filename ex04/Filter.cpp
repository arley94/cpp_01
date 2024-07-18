/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:00:32 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/30 16:13:10 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filter.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>

Filter::Filter(const std::string& inFileName)
: inFileName(inFileName), outFileName(inFileName + ".replace")
{
}

Filter::~Filter()
{
}

void	Filter::replace(const std::string &toFind, const std::string &toReplace) const
{
	std::ifstream inFile(inFileName.c_str());
	std::ofstream outFile(outFileName.c_str());
	
	std::string content;
	std::size_t	pos;

    if (!inFile.is_open())
	{
    	std::cerr << "Error opening file" << std::endl;
        exit(EXIT_FAILURE);
	}
	if (std::getline(inFile, content, '\0'))
	{
		pos = content.find(toFind);
		while (pos != std::string::npos)
		{
			content.erase(pos, toFind.length());
			content.insert(pos, toReplace);
			pos = content.find(toFind);
		}
		outFile << content;
		outFile.close();
	}
	else
	{
		std::cerr << "File is empty" << std::endl;
	}
    inFile.close();
}

