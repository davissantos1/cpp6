/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:20:29 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/29 19:12:24 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(int ac, char **av)
{
	(void)av;
	std::srand(time(NULL));
	if (ac != 1)
	{
		std::cout	<< "No arguments supported, try again!\n"
					<< "type in ./identify"
					<< std::endl;
		return (1);
	}

	std::cout	<< "========= GENERATION TEST ========="
				<< std::endl << std::endl;
	A testA;
	B testB;
	C testC;

	std::cout << "Made testA" << std::endl;
	std::cout << "Made testB" << std::endl;
	std::cout << "Made testC" << std::endl;

	Base*	test1 = generate();
	Base*	test2 = generate();
	Base*	test3 = generate();

	std::cout << "Made using generate() test1" << std::endl;
	std::cout << "Made using generate() test2" << std::endl;
	std::cout << "Made using generate() test3" << std::endl;
	
	std::cout << std::endl;

	std::cout	<< "========= POINTER IDENTIFICATION TEST ========="
				<< std::endl << std::endl;

	identify(test1);
	identify(test2);
	identify(test3);

	std::cout << std::endl;

	std::cout	<< "========= REFERRENCE IDENTIFICATION TEST ========="
				<< std::endl << std::endl;

	std::cout << "Ran identify() on testA" << std::endl;
	identify(testA);
	std::cout << "Ran identify() on testB" << std::endl;
	identify(testB);
	std::cout << "Ran identify() on testC" << std::endl;
	identify(testC);

	std::cout << std::endl;
	
	delete (test1);
	delete (test2);
	delete (test3);

	return (0);
}
