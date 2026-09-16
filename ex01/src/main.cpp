/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:05:39 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 11:31:44 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    // TEST DESTRUCTOR LEAKS
    {
        std::cout << ICE_BLUE << "*** TEST DESTRUCTOR LEAKS ***\n" << RESET << std::endl;
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j; // should not create a leak
        delete i;
        std::cout << std::endl;
    }

    // TEST ANIMAL ARRAY
    {
        const int size = 4;
        Animal* tab[size];

        std::cout << ICE_BLUE << "*** TEST ANIMALS ARRAY ***\n" << RESET << std::endl;
        for (int i = 0; i < size; i++)
        {
            if (i < size / 2)
                tab[i] = new Dog();
            else
                tab[i] = new Cat();
        }
        std::cout << std::endl;

        for (int i = 0; i < size; i++)
        {
            std::cout << MINT << tab[i]->getType() << " " << i << RESET << ": ";
            tab[i]->makeSound();
        }
        std::cout << std::endl;

        for (int i = 0; i < size; i++)
            delete tab[i];
        std::cout << std::endl;
    } 

    // TEST DEEP COPY VIA COPY CONSTRUCTOR
    {
        std::cout << ICE_BLUE << "*** TEST DEEP COPY VIA COPY CONSTRUCTOR ***\n" << RESET << std::endl;
        Dog originalDog;
        originalDog.getBrain()->setIdea(0, "run after the ball");
        Dog copyDog(originalDog);
        originalDog.getBrain()->setIdea(0, "I want to sleep");

        std::cout << std::endl;
        std::cout << MINT << "originalDog idea: " << RESET << originalDog.getBrain()->getIdea(0) << std::endl;
        std::cout << LAVENDER << "copyDog idea: " << RESET << copyDog.getBrain()->getIdea(0) << std::endl;
        std::cout << std::endl;
    }

    // TEST DEEP COPY VIA ASSIGNMENT
    {
        std::cout << ICE_BLUE << "\n*** TEST DEEP COPY VIA ASSIGNMENT ***\n" << RESET << std::endl;
        Cat originalCat;
        originalCat.getBrain()->setIdea(0, "run after the mouse");
        
        Cat copyCat;
        copyCat = originalCat; // Appelle l'opérateur d'affectation (et non le constructeur de copie)
        originalCat.getBrain()->setIdea(0, "I want to eat");

        std::cout << std::endl;
        std::cout << MINT << "originalCat idea: " << RESET << originalCat.getBrain()->getIdea(0) << std::endl;
        std::cout << LAVENDER << "copyCat idea: " << RESET << copyCat.getBrain()->getIdea(0) << std::endl;
        std::cout << std::endl;
    }

    return 0;
}