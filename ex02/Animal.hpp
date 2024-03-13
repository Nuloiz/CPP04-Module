#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
    Animal();
    Animal(const std::string& t);
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    std::string getType() const;
    virtual void makeSound() const = 0;

protected:
    std::string type;
};

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);

    void makeSound() const;

private:
    Brain* brain;
};

class Cat : public Animal
{
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound() const;

private:
    Brain* brain;
};