/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:28:03 by equesnel          #+#    #+#             */
/*   Updated: 2023/02/09 16:37:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        std::cout << meta->getType() << " " << std::endl;
        meta->makeSound();
        std::cout << dog->getType() << " " << std::endl;
        dog->makeSound();
        std::cout << cat->getType() << " " << std::endl;
        cat->makeSound(); //will output the cat sound!

        delete meta;
        delete dog;
        delete cat;
    }
    std::cout << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* wrong_cat = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        meta->makeSound();
        std::cout << wrong_cat->getType() << " " << std::endl;
        wrong_cat->makeSound(); //will output the cat sound!

        delete meta;
        delete wrong_cat;
    }
    return 0;
}
