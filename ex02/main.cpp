/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:53 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/29 18:06:44 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/// @brief test main for animals with a brain.
/// @note Whats new in C++: Dog and Cat are subclasses of Animal with a Brain.
/// the Brain is a member of Dog and Cat. I demonstrate how to use a single Animal*
/// to store different types of animals.. and then i use the Brain to store ideas
/// for the animals.
/// @fn dynamic_cast <type> (expression) is used to convert a pointer or reference
/// from the base class to a pointer or reference to a derived class.
int	main(void)
{
	const int n = 7;
	AAnimal* animals[n];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			animals[i] = new Dog();
			if (i == 0)
				dynamic_cast<Dog*>(animals[i])->getBrain()->setIdea(0, "Who let the dogs out?");
			else
				dynamic_cast<Dog*>(animals[i])->getBrain()->setIdea(0, "Who who who who who?");
		}
		else
		{
			animals[i] = new Cat();
			if (i == n / 2)
				dynamic_cast<Cat*>(animals[i])->getBrain()->setIdea(0, "Who want to set the world on fire");
			else
				dynamic_cast<Cat*>(animals[i])->getBrain()->setIdea(0, "Me Me Me Me");
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << animals[i]->getType() << i << ": \n";
		if (animals[i]->getType() == "Dog")
			std::cout << "Idea: " << dynamic_cast<Dog*>(animals[i])->getBrain()->getIdea(0) << ".\n";
		else
			std::cout << "Idea: " << dynamic_cast<Cat*>(animals[i])->getBrain()->getIdea(0) << ".\n";
		animals[i]->makeSound();
	}
	
	for (int i = 0; i < n; i++)
		delete animals[i];
		
	return (0);
}

/// @brief test main for playing around with the classes.
// int	main(void)
// {
// 	const int n = 7;
// 	int i = 0;
// 	int j = 0;
// 	Animal* animals[n];
// 	Dog* dogs[n / 2];
// 	Cat* cats[n - n / 2];

// 	std::cout << "----------Animals-----------\n";
// 	for (i = 0; i < n; i++)
// 	{
// 		if (i % 2 == 0)
// 			animals[i] = new Dog();
// 		else
// 			animals[i] = new Cat();
// 	}
// 	for (i = 0; i < n; i++)
// 	{
// 		std::cout << animals[i]->getType() << ": \n";
// 		animals[i]->makeSound();
// 	}
// 	for (i = 0; i < n; i++)
// 			delete animals[i];

// 	std::cout << "\n----------BrainAnimals-----------\n";
// 	for (i = 0; i < n; i++)
// 	{
// 		if (i < n / 2)
// 		{
// 			dogs[i] = new Dog();
// 			if (i == 0)
// 				dogs[i]->getBrain()->setIdea(0, "Who let the dogs out?");
// 			else
// 				dogs[i]->getBrain()->setIdea(0, "Who who who who?");
// 		}
// 		else
// 		{
// 			cats[j] = new Cat();
// 			if (j == 0)
// 				cats[j++]->getBrain()->setIdea(0, "Who want to set the world on fire");
// 			else
// 				cats[j++]->getBrain()->setIdea(0, "Me Me Me Me");
// 		}
// 	}

// 	for (i = 0, j = 0; i < n; i++)
// 	{
// 		if (i < n / 2)
// 		{
// 			std::cout << dogs[i]->getType() << ": \n";
// 			std::cout << "Idea: " << dogs[i]->getBrain()->getIdea(0) << ".\n";
// 			dogs[i]->makeSound();
// 		}
// 		else
// 		{
// 			std::cout << cats[j]->getType() << ": \n";
// 			std::cout << "Idea: " << cats[j]->getBrain()->getIdea(0) << ".\n";
// 			cats[j++]->makeSound();
// 		}		
// 	}
	
// 	for (i = 0; i < n / 2; i++)
// 		delete dogs[i];

// 	for (j = 0; j < n - n / 2; j++)
// 		delete cats[j];
	
// 	return (0);
// }