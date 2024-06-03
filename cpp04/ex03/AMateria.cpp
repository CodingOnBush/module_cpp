/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:22:29 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 14:52:28 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria const & obj)
{
	*this = obj;
}

AMateria & AMateria::operator=(AMateria const & obj)
{
	if (this != &obj)
		this->type_ = obj.type_;
	return (*this);
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const & type) : type_(type)
{
}

std::string const & AMateria::getType() const
{
	return (this->type_);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
