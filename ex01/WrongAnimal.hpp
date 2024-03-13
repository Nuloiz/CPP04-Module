#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    std::string getType() const;
    void makeSound() const;

protected:
    std::string type;
};

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);

    void makeSound() const;
};