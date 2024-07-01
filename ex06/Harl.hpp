/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-01 05:45:42 by acoto-gu          #+#    #+#             */
/*   Updated: 2024-07-01 05:45:42 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	void debug( void ) const; 
	void info( void ) const; 
	void warning( void ) const; 
	void error( void ) const; 
public:
	Harl(/* args */);
	~Harl();
	void filter(const std::string &level) const;
};

#endif