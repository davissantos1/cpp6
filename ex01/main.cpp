/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 11:20:29 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/29 17:42:10 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "No arguments supported, try again!\n"
					<< "type in ./serializer"
					<< std::endl;
		return (1);
	}

	std::cout	<< "========= DATA STRUCTURE CREATION ========="
				<< std::endl << std::endl;

	Data test = {'a', 10,  42.0f, 42.42};

	std::cout	<< "Struct test:\n"
				<< "cv: " << test.cv << std::endl
				<< "iv: " << test.iv << std::endl
				<< "fv: " << test.fv << std::endl
				<< "dv: " << test.dv << std::endl;
	
	std::cout << std::endl;

	std::cout	<< "========= SERIALIZATION / DESERIALIZATION TEST ========="
				<< std::endl << std::endl;

	uintptr_t	testSerialized = Serializer::serialize(&test);
	Data*		testDeserialized = Serializer::deserialize(testSerialized);

	std::cout << "Data ptr: " << &test << std::endl;
	std::cout << "Serialized ptr: " <<  testSerialized << std::endl;
	std::cout << "Deserialized ptr: " <<  testDeserialized << std::endl;

	std::cout << std::endl;

	std::cout	<< "========= PRINT TEST AFTER DESERIALIZATION ========="
				<< std::endl << std::endl;

	std::cout	<< "Struct testDeserialized:\n"
				<< "cv: " << testDeserialized->cv << std::endl
				<< "iv: " << testDeserialized->iv << std::endl
				<< "fv: " << testDeserialized->fv << std::endl
				<< "dv: " << testDeserialized->dv << std::endl;

	std::cout << std::endl;

	//std::cout	<< "========= INITIALIZATION TEST ON SERIALIZER ========="
	//			<< std::endl << std::endl;
	//Serializer * serial = new Serializer;
	//Serializer serial2;

	//std::cout << std::endl;
	return (0);
}
