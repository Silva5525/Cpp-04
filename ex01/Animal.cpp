/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:50:39 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 13:02:57 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/// @brief Default constructor
Animal::Animal() : type("Animal") 
{
	std::cout << "Animal constructor called.\n";
}

/// @brief Copy constructor
Animal::Animal(const Animal& src) : type(src.type)
{
	std::cout << "Animal copy constructor called.\n";
}

/// @brief Assignation operator
Animal& Animal::operator=(const Animal& src)
{
	if (this != &src)
		type = src.type;
	std::cout << "Animal assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called.\n";
}

/// @brief Get the type of the Animal
/// @return the type of the Animal
std::string Animal::getType() const
{
	return (type);
}
