#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    int i = 0;
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        while (i < 100)
        {
            ideas[i] = other.ideas[i];
            i++;
        }
    }
    return *this;
}