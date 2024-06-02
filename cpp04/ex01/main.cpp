/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/06/02 19:34:42 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define RED		"\033[31m"

int main(void)
{
	{
		Animal	**array = new Animal*[4];

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
	return (0);
}
