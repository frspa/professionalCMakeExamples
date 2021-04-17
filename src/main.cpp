/* A first dummy example */

#include <stdlib.h>
#include <iostream>
#include "cat.hpp"

int main(void)
{
    std::cout << "Hello world \n";

    Cat cat1("Max", 42);

    std::cout << "The age of " << cat1.getName() << " is " << cat1.getAge() << std::endl;

    cat1.setName(std::string("Johann"));

    std::cout << "The age of " << cat1.getName() << " is " << cat1.getAge() << std::endl;

    return 1;
}