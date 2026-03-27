/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:34:27 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/27 15:58:30 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	checkSpecial(std::string value)
{
	bool	isSpecial = false;

	std::string specialNAN[] = {"nan", "+nan", "-nan", "nanf", "+nanf", "-nanf"};
	std::string specialINF[] = {"inf", "+inf", "-inf", "inff", "+inff", "-inff"};
	for (int i = 0; i < 6; i++)
		if (specialNAN[i] == value || specialINF[i] == value)
			isSpecial = true;
	return (isSpecial);
}	

void	ScalarConverter::convert(std::string value)
{
	char *end = NULL;
	double	d = std::strtod(value.c_str(), &end);

	if (*end && *end != 'f' && !checkSpecial(value))
		d = NAN;
	if (value.length() == 1 && !std::isdigit(value[0]))
		d = static_cast<double>(value[0]);
	if (std::isinf(d) || std::isnan(d) || d < 0 || d > 127)
		std::cout << "char: impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
	if (std::isinf(d) || std::isnan(d) || d < INT_MIN || d > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
