/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:00:13 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 18:44:50 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

/// @brief class Dog
/// @note new in C++: Dog is a subclass of Animal.
/// override is just a indication for the compiler that the function is supposed 
/// to override a virtual function in the base class. for c++98 i coment it out
/// and it will work the same way.
class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		~Dog();
		
		void makeSound() const;
		// void makeSound() const override;
};

#endif