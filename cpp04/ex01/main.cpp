/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 18:52:18 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define RED		"\033[31m"

// static void	test1(void);

int main(void)
{
	// test1();
	Animal	**array = new Animal*[4];

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "----------" << i << "---------" << std::endl;
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << "--------------------" << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "----------" << i << "---------" << std::endl;
		delete array[i];
		std::cout << "--------------------" << std::endl;
	}
	delete [] array;

	std::cout << std::endl;
	Dog	*dog = new Dog();
	Dog	*dog2 = dog;

	std::cout << std::endl;
	dog->makeSound();
	dog2->makeSound();
	delete dog;
	return (0);
}

// static void	test1(void)
// {
// 	std::cout << RED << "Let's create a ptr Animal : " << RESET << std::endl;
// 	const Animal*	ptrAnimal = new Animal();

// 	std::cout << std::endl;

// 	std::cout << RED << "Let's create a Dog and a Cat : " << RESET << std::endl;
// 	const Animal*	dog = new Dog();
// 	const Animal*	cat = new Cat();

// 	std::cout << std::endl;

// 	std::cout << "════════════════════════════════════════" << std::endl;
// 	ptrAnimal->makeSound();
// 	dog->makeSound();
// 	cat->makeSound();
// 	std::cout << "════════════════════════════════════════" << std::endl;

// 	std::cout << std::endl;

// 	std::cout << RED << "Let's delete the Dog and the Cat: " << RESET << std::endl;
// 	delete dog;
// 	delete cat;
	
// 	std::cout << std::endl;

// 	std::cout << RED << "Let's delete the ptr Animal: " << RESET << std::endl;
// 	delete ptrAnimal;
// }
