/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 18:36:05 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter*	me = new Character("me");
	AMateria* 	materia1;
	AMateria* 	materia2;
	AMateria* 	materia3;
	AMateria* 	materia4;
	
	materia1 = src->createMateria("ice");
	me->equip(materia1);

	materia2 = src->createMateria("cure");
	me->equip(materia2);

	materia3 = src->createMateria("ice");
	me->equip(materia3);

	materia4 = src->createMateria("cure");
	me->equip(materia4);

	std::cout << "1-------------------------" << std::endl;
	me->use(0, *me);
	me->use(1, *me);
	me->use(2, *me);
	me->use(3, *me);
	std::cout << "-------------------------" << std::endl;

	me->unequip(3);

	std::cout << "2-------------------------" << std::endl;
	me->use(3, *me);
	std::cout << "-------------------------" << std::endl;

	me->equip(materia4);
	
	std::cout << "3-------------------------" << std::endl;
	me->use(3, *me);
	std::cout << "-------------------------" << std::endl;

	
	ICharacter* bob = new Character("bob");
	
	std::cout << "4-------------------------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "-------------------------" << std::endl;
	
	delete bob;
	delete me;
	delete src;
	
	return (0);
}

// int	main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
	
// 	ICharacter* bob = new Character("bob");
	
// 	me->use(0, *bob);
// 	me->use(1, *bob);
	
// 	delete bob;
// 	delete me;
// 	delete src;
	
// 	return (0);
// }
