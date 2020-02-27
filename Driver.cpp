#include "tohTry.hpp"
#include <iostream>

int main()
{
    tohTry* theTowers = new tohTry();
    theTowers->addto(1, 1);
    theTowers->addto(2, 1);
    theTowers->addto(3, 1);
    theTowers->addto(4, 1);
    theTowers->fromTo(1, 2);
    theTowers->fromTo(1, 3);
    theTowers->showTowers();
    std::cout << "we got here" << "\n";
}