#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include "turkey.h"
#include <iostream>

class WildTurkey:public Turkey
{
public:
    WildTurkey();
    void fly() override{
        std::cout << "I’m flying a short distance\n";
    }
    void gobble() override{
        std::cout << "gobble gobble!\n";
    }
};

#endif // WILDTURKEY_H
