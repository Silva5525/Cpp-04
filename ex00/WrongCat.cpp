/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:20:46 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 18:47:31 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/// @brief Default constructor
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called.\n";
}

/// @brief Copy constructor
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called.\n";
}

/// @brief Assignation operator
WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		WrongAnimal::operator=(src);
	std::cout << "WrongCat assignation operator called.\n";
	return (*this);
}

/// @brief Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called.\n";
}

/// @brief Make a sound of the WrongCat (will NOT override the WrongAnimal class
/// becouse the makeSound function is not virtual in the base class)
void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow.\n";
}
