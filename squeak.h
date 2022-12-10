#ifndef SQUEAK_H
#define SQUEAK_H

#include <iostream>
#include "quackbehavior.h"

class Squeak : public QuackBehavior
{
public:
    Squeak();
    void quack() override {
        std::cout << "Squeak !!\n";
    }
};

#endif // SQUEAK_H
