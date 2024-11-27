/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:50:39 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 18:49:25 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/// @brief Default constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal") 
{
	std::cout << "WrongAnimal constructor called.\n";
}

/// @brief Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type)
{
	std::cout << "WrongAnimal copy constructor called.\n";
}

/// @brief Assignation operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "WrongAnimal assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called.\n";
}

/// @brief Get the type of the WrongAnimal
/// @return the type of the WrongAnimal
std::string WrongAnimal::getType() const
{
	return (type);
}

/// @brief Make a sound of the WrongAnimal (default will not
/// override the WrongAnimal class becouse the makeSound is not virtual)
void WrongAnimal::makeSound() const
{
	std::cout << "Now you hear the WrongAnimal.\n";
}
