#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " : ";
    j->makeSound();
    std::cout << i->getType() << " ";
    i->makeSound();
    std::cout  << "\n";
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    return 0;
}