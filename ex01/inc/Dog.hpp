/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:41:10 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 10:35:20 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
        Dog(void);
        Dog(Dog const & src);
        ~Dog(void);

        Dog & operator=(Dog const & rhs);
        void   makeSound() const;
        Brain* getBrain() const;

    private :

        Brain* _brain;
};


#endif