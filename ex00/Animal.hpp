/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:34:31 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 18:55:51 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

/// @brief Represents a general Animal with polymorphic behavior.
/// This class is part of an inheritance hierarchy to demonstrate polymorphism.
/// @note New in C++: Animal is the base class.
/// virtual is used to make sure that the function is virtual in the base class
/// and that the function is overridden in the derived class.
/// The distructor is virtual so that the derived class destructor is called
/// when the base class pointer is deleted. (no undefined behavior & no memory leaks)
/// makeSound is a pure virtual function so that the derived class can override it.
class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};

#endif