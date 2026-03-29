/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:34:48 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/27 16:42:32 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
#include <string>
#include <cstdlib>

class	ScalarConverter
{
	private:
		ScalarConverter();
	public:
		static void convert(std::string value);
};

#endif
