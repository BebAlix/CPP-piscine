/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:42:48 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/22 20:29:34 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    }
    std::cout << std::endl;
    {
        int nb = 4;
        int middle = (nb / 2);
        const AAnimal *tab[nb];
        for (int i = 0; i < nb; i++)
        {
            if (i < middle)
                tab[i] = new Dog();
            else
                tab[i] = new Cat();
        }

        for (int i = 0; i < nb; i++)
            tab[i]->makeSound();
            
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
    // {
    //     const AAnimal *meta = new AAnimal();

    //     std::cout << meta->getType() << " " << std::endl;
    //     meta->makeSound();
    // }
    return 0;
}
