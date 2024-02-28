#pragma once

#include <string>
#include <iostream>

class Brain
{
public:
    Brain();
    virtual ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);

    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);

protected:
    std::string ideas[100];
};