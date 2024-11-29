/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:20:46 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/28 13:02:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/// @brief WrongCat is a subclass of WrongAnimal.
/// @note Check the difference between the Cat and WrongCat class.
/// and the difference between the Animal and WrongAnimal class.
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& src);
		WrongCat& operator=(const WrongCat& src);
		~WrongCat();
		
		void makeSound() const;
};

#endif
