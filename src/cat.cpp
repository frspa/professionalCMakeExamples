#include "cat.hpp"

Cat::Cat(std::string name, int age) : name_(name), age_(age) {}

void Cat::setName(const std::string &newName)
{
    name_ = newName;
}

void Cat::setAge(const int newAge)
{
    age_ = newAge;
}

int Cat::getAge() const
{
    return age_;
}

std::string Cat::getName() const
{
    return name_;
}
