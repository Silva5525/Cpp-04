/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:00:13 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 18:04:13 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// #include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

/// @brief class Dog
/// @note new in C++: Dog is a subclass of Animal with a Brain.
/// Brain is a member of Dog.
class Dog : public AAnimal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &src);
		Dog& operator=(const Dog& src);
		~Dog();
		
		void makeSound() const;
		// void makeSound() const override;
		Brain* getBrain() const;
};

#endif
