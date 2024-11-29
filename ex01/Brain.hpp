/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:39:33 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 15:44:34 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

/// @brief Brain Class
/// @note it makes it possible to use a array of strings, which are Encapsulated
/// in the private section of the class. Accessed with the setIdea and getIdea
/// functions.
class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		~Brain();

		void setIdea(int i, const std::string& idea);
		std::string getIdea(int i) const;
};

#endif