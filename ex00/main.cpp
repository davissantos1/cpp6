/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:20:29 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/27 11:22:40 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout	<< "Only one argument supported, try again!"
					<< std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
