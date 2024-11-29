/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:20:46 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 18:05:39 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/// @brief Default constructor
Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructor called.\n";
}

/// @brief Copy constructor
Cat::Cat(const Cat &src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called.\n";
}

/// @brief Assignation operator
Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		AAnimal::operator=(src);
		if (brain)
			delete brain;
		brain = new Brain(*src.brain);
	}
	std::cout << "Cat assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
Cat::~Cat()
{
	delete brain;	
	std::cout << "Cat destructor called.\n";
}

/// @brief Make a sound of the Cat (override the AAnimal class)
void Cat::makeSound() const
{
	std::cout << "Meow. Meow.\n";
}

/// @brief getter function for the Brain for the Cat
/// @return brain of the Cat
Brain* Cat::getBrain() const
{
	return (brain);
}
