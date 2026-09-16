/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:10:49 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 15:13:43 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << PURPLE <<"AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const & rhs) : type(rhs.type)
{
	std::cout  << PURPLE << type << " Copy constructor called." << RESET << std::endl; 
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
	if (this != &src)
    	type = src.type;
    return *this;
}

std::string AAnimal::getType() const
{
	return type;
}

AAnimal::~AAnimal()
{
	std::cout << PURPLE << "AAnimal destructor called" << RESET <<std::endl;
}