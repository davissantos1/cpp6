/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 18:34:32 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/29 19:08:33 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int key = std::rand() % 3;

	switch (key)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	A*	testA = dynamic_cast<A*>(p);
	B*	testB = dynamic_cast<B*>(p);
	C*	testC = dynamic_cast<C*>(p);
	
	std::cout << "The identified class is: ";
	if (testA)
		std::cout << "A" << std::endl;
	else if (testB)
		std::cout << "B" << std::endl;
	else if (testC)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A&	testA = dynamic_cast<A&>(p);
		(void) testA;
		std::cout << "The identified class is: A" << std::endl;
		return;
	} catch (std::bad_cast &e) {}
	try
	{
		B&	testB = dynamic_cast<B&>(p);
		(void) testB;
		std::cout << "The identified class is: B" << std::endl;
		return;
	} catch (std::bad_cast &e) {}
	try
	{
		C&	testC = dynamic_cast<C&>(p);
		(void) testC;
		std::cout << "The identified class is: C" << std::endl;
		return;
	} catch (std::bad_cast &e) {}
	std::cout << "Unknown referrence" << std::endl;
}
