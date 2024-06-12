/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:02:50 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/12 09:48:26 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "* Ice: materia is created *" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
    *this = src;
    // std::cout << "* Ice: materia is copied *" << std::endl;
}

Ice&   Ice::operator=(const Ice& rhs) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Ice::~Ice()
{
    // std::cout << "* Ice: ice is destroyed *" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "I shoots an ice bolt at " << target.getName() << std::endl;
}

