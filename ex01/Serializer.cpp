/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 17:09:35 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/29 17:33:54 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer( const Serializer& other )
{
	(void)other;
}

Serializer&	Serializer::operator=( const Serializer& other )
{
	(void)other;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t data = reinterpret_cast<uintptr_t>(ptr);
	return (data);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	Data* data = reinterpret_cast<Data *>(raw);
	return (data);
}
