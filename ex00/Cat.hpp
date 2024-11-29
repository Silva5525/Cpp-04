/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:20:46 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 12:59:12 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

/// @brief class Cat
/// @note new in C++: Cat is a subclass of Animal
/// override is just a indication for the compiler that the function is supposed 
/// to override a virtual function in the base class. for c++98 i coment it out
/// and it will work the same way.
class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		Cat &operator=(const Cat& src);
		~Cat();
		
		void makeSound() const;
		// void makeSound() const override;
};

#endif
