#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    std::string getType() const;
    virtual void makeSound() const;

protected:
    std::string _type;
};

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);

    void makeSound() const;
};

class Cat : public Animal
{
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound() const;
};