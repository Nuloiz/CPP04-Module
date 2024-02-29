#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " : ";
    j->makeSound();
    std::cout << i->getType() << " : ";
    i->makeSound();
    std::cout  << "\n";
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout  << "\n";
    const WrongAnimal* i2 = new WrongCat();
    std::cout << i2->getType() << " : ";
    i2->makeSound();
    delete i2;
    return 0;
}