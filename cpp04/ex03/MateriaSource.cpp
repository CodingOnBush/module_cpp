/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:06:56 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 11:46:26 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & obj)
{
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = obj.inventory_[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->inventory_[i] = obj.inventory_[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory_[i])
			delete this->inventory_[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory_[i] && this->inventory_[i]->getType() == type)
			return (this->inventory_[i]->clone());
	}
	return (NULL);
}
