/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:15:07 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 13:11:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/// @brief Default constructor
Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Brain Dog constructed.\n";
}

/// @brief Copy constructor
Dog::Dog(const Dog& src) : Animal(src), brain (new Brain(*src.brain))
{
	std::cout << "Dog copy constructor called.\n";
}

/// @brief Assignation operator
Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		Animal::operator=(src);
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

/// @brief Make a sound of the Dog (override the Animal class)
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
