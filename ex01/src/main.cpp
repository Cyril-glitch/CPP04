/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:58:07 by cyril             #+#    #+#             */
/*   Updated: 2026/09/15 11:12:46 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Animal.hpp"

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    meta->makeSound();
    cat->makeSound();
    dog->makeSound();
    wrongCat->makeSound();

    delete meta;
    delete cat;
    delete dog;
    delete wrongCat;
    return 0;
}