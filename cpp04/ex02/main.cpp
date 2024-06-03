/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 08:10:16 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define RED		"\033[31m"

int main(void)
{
	{
		AAnimal	**array = new AAnimal*[4];

		for (int i = 0; i < 4; i++)
		{
			std::cout << "----------" << i << "---------" << std::endl;
			if (i % 2 == 0)
				array[i] = new Dog();
			else
				array[i] = new Cat();
			std::cout << "--------------------" << std::endl;
		}
		for (int i = 0; i < 4; i++)
		{
			std::cout << "----------" << i << "---------" << std::endl;
			delete array[i];
			std::cout << "--------------------" << std::endl;
		}
		delete [] array;
	}

	std::cout << std::endl << std::endl;
	
	{
		Dog	dog = Dog();
		Dog	cpy = dog;

		dog.makeSound();
		cpy.makeSound();
	}

	// std::cout << std::endl << std::endl;

	// {
		// This will not compile because AAnimal is an abstract class :
		// AAnimal	instance = AAnimal();
		// or this one :
		// AAnimal	i;
	// }
	return (0);
}
