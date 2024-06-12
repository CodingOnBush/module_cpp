/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:54:47 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/12 09:48:26 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
    // std::cout << "* AMateria: materia is created *" << std::endl;
}

AMateria::AMateria(std::string const & type)  : _type(type)
{
    std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

