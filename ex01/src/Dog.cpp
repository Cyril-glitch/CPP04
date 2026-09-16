/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:04:26 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 11:28:38 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"


Dog::Dog() : Animal()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << PURPLE <<"Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	_brain = new Brain(*src._brain);
	std::cout  << PURPLE << type << " Copy constructor called." << RESET << std::endl; 
}

Dog & Dog::operator=(Dog const & rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
		if (_brain && rhs._brain)
			*_brain = *rhs._brain;
	}
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "\"WOOF WOOF!\"" << std::endl;
}

Brain* Dog::getBrain() const
{
	return _brain;
}

Dog::~Dog()
{
	if (_brain != NULL)
	{
		delete _brain;
		_brain = NULL;
	}
	std::cout << PURPLE << "Dog destructor called" << RESET <<std::endl;
}