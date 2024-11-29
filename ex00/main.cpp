/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:53 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/27 20:38:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/// @brief test main for the classes.
/// Animal is the base class and Dog and Cat are derived classes.
/// the pointer to animal dog and cat are allocated on the heap using new.
/// we show using getType which class is called and makeSound which sound is made.
/// the animal will be default sound. the dog will bark and the cat will meow.
/// becouse the cat and dog will override the makeSound function with their own sound.
/// then we delete the pointers to free the memory.
/// @note WrongAnimal is the base class and WrongCat is the derived class.
/// it shows the wrong way to implement the classes. the makeSound and destructor are
/// not virtual so the makeSound function will not be overriden in the derived class.
int	main(void)
{
	std::cout << "----------Animals-----------\n";
	
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << animal->getType() << ": \n";
	animal->makeSound();
	
	std::cout << dog->getType() << ": \n";
	dog->makeSound();

	std::cout << cat->getType() << ": \n";
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;
	
	std::cout << "\n----------WrongAnimals-----------\n";
	
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << wrongAnimal->getType() << ": \n";
	wrongAnimal->makeSound();
	
	std::cout << wrongCat->getType() << ": \n";
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
	
	return (0);
}

/// subjekt main
// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete j;
// delete i;
// delete meta;
// return 0;
// }
