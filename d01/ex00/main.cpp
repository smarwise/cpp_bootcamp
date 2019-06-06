#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack()
{
    Pony    pony_;

    std::cout << "Pony on the stack created" << std::endl;
}

void ponyOnTheHeap()
{
    Pony    *pony2 = new Pony();

    std::cout << "Pony on the heap created" << std::endl;

    delete pony2;
}

int         main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}