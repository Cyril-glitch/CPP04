/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:38:53 by cyril             #+#    #+#             */
/*   Updated: 2026/09/16 10:35:06 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat(void);
        Cat(Cat const & src);
        ~Cat(void);

        Cat & operator=(Cat const & rhs);
        void   makeSound() const;
        Brain* getBrain() const;

    private :

        Brain* _brain;
};


#endif