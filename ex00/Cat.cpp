/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:20:46 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 18:43:05 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/// @brief Default constructor
Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called.\n";
}

/// @brief Copy constructor
Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called.\n";
}

/// @brief Assignation operator
Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		Animal::operator=(src);
	std::cout << "Cat assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called.\n";
}

/// @brief Make a sound of the Cat (override the Animal class)
void Cat::makeSound() const
{
	std::cout << "Meow. Meow.\n";
}
