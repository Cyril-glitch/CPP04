/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:58:07 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 09:18:03 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Animal.hpp"

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        meta->makeSound();
        i->makeSound();
        j->makeSound();

        delete meta;
        delete i;
        delete j;
    }
    std::cout << std::endl;
    {
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *i = new WrongCat();

        std::cout << i->getType() << " " << std::endl;
        meta->makeSound();
        i->makeSound();

        delete meta;
        delete i;
    }
    return 0;
}