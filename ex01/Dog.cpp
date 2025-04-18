#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound () const
{
    std::cout << "Bark" << std::endl;
}