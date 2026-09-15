/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:10:49 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:36:28 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << PURPLE <<"Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(Animal const & rhs) : type(rhs.type)
{
	std::cout  << MINT << type << " Copy constructor called." << RESET << std::endl; 
}

Animal & Animal::operator=(Animal const & src)
{
    type = src.type;
    return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "\"Default animal sound\"" << std::endl;
}

Animal::~Animal()
{
	std::cout << PURPLE << "Animal destructor called" << RESET <<std::endl;
}