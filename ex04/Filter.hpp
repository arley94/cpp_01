/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filter.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:20:33 by acoto-gu          #+#    #+#             */
/*   Updated: 2024/06/05 09:31:15 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILTER_HPP
#define FILTER_HPP

#include <string>

class Filter
{
private:
	const std::string	inFileName;
	const std::string	outFileName;
public:
	Filter(const std::string& inFileName);
	~Filter();
	void	replace(const std::string &toFind, const std::string &toReplace) const;
};

#endif