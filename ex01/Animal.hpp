/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:34:31 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 13:03:19 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

/// @brief Represents a general Animal with polymorphic behavior.
/// This class is part of an inheritance hierarchy to demonstrate polymorphism.
class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
