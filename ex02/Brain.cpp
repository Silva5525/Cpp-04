/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:39:44 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 15:49:25 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/// @brief Default constructor.
/// @note it fills the ideas array with "Binaryc noise."
Brain::Brain()
{
	std::cout << "Brain appears.\n";
	for (int i = 0; i < 100; ++i)
		ideas[i] = "Binaryc noise.";
}

/// @brief Copy constructor
/// @note Performs a deep copy of the ideas array.
Brain::Brain(const Brain& src)
{
	std::cout << "Brain cloned.\n";
	for (int i = 0; i < 100; ++i)
		ideas[i] = src.ideas[i];
}

/// @brief Assignation operator
/// @note Ensures proper cleanup and duplication of the ideas array.
/// Reinforces the "Rule of Three" which are the destructor, copy constructor and
/// assignation operator.
Brain& Brain::operator=(const Brain& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = src.ideas[i];
	}
	std::cout << "Brain assigned.\n";
	return (*this);
}

/// @brief Destructor
Brain::~Brain()
{
	std::cout << "Brain is disappearing.\n";
}

/// @brief seter for the string in the specified index of the ideas array.
/// @param i index of the idea
/// @param idea the idea to be set in ideas[i]
void Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
}

/// @brief geter for the ideas. Retrieves a string from the index of the ideas array.
/// @param i index of the idea
/// @return the idea at index i
std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (ideas[i]);
	return ("[WrongIndex].");
}
