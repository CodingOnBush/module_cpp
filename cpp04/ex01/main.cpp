/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/06/11 18:25:10 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define RED		"\033[31m"

int main(void)
{
	// {
	// 	Animal	**array = new Animal*[4];

	// 	for (int i = 0; i < 4; i++)
	// 	{
	// 		std::cout << "----------" << i << "---------" << std::endl;
	// 		if (i % 2 == 0)
	// 			array[i] = new Dog();
	// 		else
	// 			array[i] = new Cat();
	// 		std::cout << "--------------------" << std::endl;
	// 	}
	// 	for (int i = 0; i < 4; i++)
	// 	{
	// 		std::cout << "----------" << i << "---------" << std::endl;
	// 		delete array[i];
	// 		std::cout << "--------------------" << std::endl;
	// 	}
	// 	delete [] array;
	// }

	// std::cout << std::endl << std::endl;
	
	{
		Dog	dog;
		Dog	dog2;
		Dog	cpy = dog;

		cpy = dog2;
		cpy = dog;
		cpy = dog2;
		cpy = dog;
		cpy = dog2;
		cpy = dog;
		cpy = dog2;
		cpy = dog;
		// dog.makeSound();
		// cpy.makeSound();
	}
	return (0);
}
