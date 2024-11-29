/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:15:07 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 12:59:42 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/// @brief Default constructor
Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called.\n";
}

/// @brief Copy constructor
Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Dog copy constructor called.\n";
}

/// @brief Assignation operator
Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
		Animal::operator=(src);
	std::cout << "Dog assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called.\n";
}

/// @brief Make a sound of the Dog (override the Animal class)
void Dog::makeSound() const
{
	std::cout << "Woof. Woof.\n";
}
