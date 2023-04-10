/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:42:48 by equesnel          #+#    #+#             */
/*   Updated: 2023/03/15 12:56:26 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    }
    std::cout << std::endl;
    {
        int nb = 4;
        int middle = (nb / 2);
        const Animal *tab[nb];
        for (int i = 0; i < nb; i++)
        {
            if (i < middle)
                tab[i] = new Dog();
            else
                tab[i] = new Cat();
        }

        for (int i = 0; i < nb; i++)
            tab[i]->makeSound();
        tab[0]->showBrain();
            
        for (int i = 0; i < nb; i++)
            delete tab[i];
    }
    std::cout << std::endl;
    {
        Dog *original = new Dog();
        Dog copy(*original);

        original->showBrain();
        std::cout << std::endl;
        copy.showBrain();
        delete original;
        copy.showBrain();
    }
    return 0;
}
