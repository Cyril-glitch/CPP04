/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:25:21 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:09:06 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal")
{
	std::cout << PURPLE <<"WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs) : type(rhs.type)
{
	std::cout  << MINT << type << " WrongAnimal Copy constructor called." << RESET << std::endl; 
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
    type = src.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\"Wrong Animal sound\"" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << PURPLE <<"WrongAnimal destructor called" << RESET <<std::endl;
}