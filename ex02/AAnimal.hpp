/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:34:31 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/02 16:13:38 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

/// @brief Represents a general AAnimal with polymorphic behavior.
/// This class is part of an inheritance hierarchy to demonstrate polymorphism.
/// @note new in C++: AAnimal is the base class becouse we have addet
/// = 0 to the makeSound function. XD thats basicly it for ex02.
/// @details
/// virtual void makeSound() const; Virtual, but class can still be instantiated.
/// virtual void makeSound() const = 0; Pure virtual, making the class abstract.
class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal& src);
		AAnimal& operator=(const AAnimal& src);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
