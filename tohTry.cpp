#include "tohTry.hpp"
#include <string>
#include <iostream>
using namespace std;

tohTry::tohTry()
{
    this->towerOne = new Stack();
    this->towerTwo = new Stack();
    this->towerThree = new Stack();
    this->count1 = 0;
    this->count2 = 0;
    this->count3 = 0;
}

void tohTry::addto(int val, int newT)
{
    if(newT = 1)
    {
        this->towerOne->push(val);
        this->count1++;
    }
    else if(newT = 2)
    {
        this->towerTwo->push(val);
        this->count2++;
    }
    else if(newT = 3)
    {
        this->towerThree->push(val);
        this->count3++;
    }
    else
    {
        std::cout << "not 1,2, or 3" << "\n";
    }
}

void tohTry::fromTo(int origT, int newT)
{
    int val = 0;
    if(origT = 1)
    {
        val = this->towerOne->pop();
        this->count1--;
        if(newT == 3)
        {
            this->towerThree->push(val);
            this->count3++;
        }
        else if(newT == 2)
        {
            this->towerThree->push(val);
            this->count2++;
        }
        else
        {
            std::cout << "not 1,2, or 3" << "\n";
        }
    }
    else if(origT == 2)
    {
        val = this->towerTwo->pop();
        this->count2--;
        if(newT == 1)
        {
            this->towerOne->push(val);
            this->count1++;
        }
        else if(newT == 3)
        {
            this->towerThree->push(val);
            this->count3++;
        }
        else
        {
            std::cout << "not 1,2, or 3" << "\n";
        }
    }
    else if(origT = 3)
    {
        val = this->towerThree->pop();
        this->count3--;
        if(newT == 2)
        {
            this->towerTwo->push(val);
            this->count2++;
        }
        else if(newT == 1)
        {
            this->towerOne->push(val);
            this->count1++;
        }
        else
        {
            std::cout << "not 1,2, or 3" << "\n";
        }
    }
    else
    {
        std::cout << "not 1,2, or 3" << "\n";
    }
    
}

void tohTry::showTowers()
{
    
}