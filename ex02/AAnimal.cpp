/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:50:39 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 13:02:57 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/// @brief Default constructor
AAnimal::AAnimal() : type("AAnimal") 
{
	std::cout << "AAnimal constructor called.\n";
}

/// @brief Copy constructor
AAnimal::AAnimal(const AAnimal& src) : type(src.type)
{
	std::cout << "AAnimal copy constructor called.\n";
}

/// @brief Assignation operator
AAnimal& AAnimal::operator=(const AAnimal& src)
{
	if (this != &src)
		type = src.type;
	std::cout << "AAnimal assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called.\n";
}

/// @brief Get the type of the AAnimal
/// @return the type of the AAnimal
std::string AAnimal::getType() const
{
	return (type);
}
