#pragma once

#include <stdlib.h>
#include <iostream>

class Cat
{
public:
    Cat(std::string name, int age);
    void setName(const std::string &newName);
    void setAge(const int newAge);
    int getAge() const;
    std::string getName() const;

private:
    int age_;
    std::string name_;
};
