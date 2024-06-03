/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:18:58 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 15:05:08 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() : count_(0)
{
}

Character::Character(Character const & obj)
{
	*this = obj;
}

Character & Character::operator=(Character const & obj)
{
	if (this != &obj)
	{
		this->name_ = obj.name_;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory_[i])
				delete this->inventory_[i];
			this->inventory_[i] = obj.inventory_[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory_[i])
			delete this->inventory_[i];
	}
}

Character::Character(std::string const & name) : count_(0)
{
	this->name_ = name;
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
}

std::string const & Character::getName() const
{
	return (this->name_);
}

void	Character::equip(AMateria *m)
{
	count_++;
	if (count_ > 4)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	count_--;
	if (idx >= 0 && idx < 4)
		this->inventory_[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory_[idx])
		this->inventory_[idx]->use(target);
}
