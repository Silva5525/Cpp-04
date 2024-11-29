/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:15:07 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 18:04:49 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/// @brief Default constructor
Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructed.\n";
}

/// @brief Copy constructor
Dog::Dog(const Dog& src) : AAnimal(src), brain (new Brain(*src.brain))
{
	std::cout << "Dog copy constructor called.\n";
}

/// @brief Assignation operator
Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		AAnimal::operator=(src);
		if (brain)
			delete brain;
		brain = new Brain(*src.brain);

	}
	std::cout << "Dog assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called.\n";
}

/// @brief Make a sound of the Dog (override the AAnimal class)
void Dog::makeSound() const
{
	std::cout << "Woof. Woof.\n";
}

/// @brief getter function for the Brain for the Dog
/// @return brain of the Dog
Brain* Dog::getBrain() const
{
	return (brain);
}
