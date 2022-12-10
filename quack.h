#ifndef QUACK_H
#define QUACK_H

#include "quackbehavior.h"
#include <iostream>


class Quack : public QuackBehavior
{
public:
    Quack()    { }
    void quack() override {
        std::cout << "Quack !\n";
    }
};

#endif // QUACK_H
