/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:04:26 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 10:57:14 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << PURPLE <<"Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const & rhs) : Animal(rhs)
{
	std::cout  << MINT << type << " Copy constructor called." << RESET << std::endl; 
}

Dog & Dog::operator=(Dog const & src)
{
    type = src.type;
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "\"WOOF WOOF!\"" << std::endl;
}

Dog::~Dog()
{
	std::cout << PURPLE << "Dog destructor called" << RESET <<std::endl;
}