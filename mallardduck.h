#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include <iostream>
#include "duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {

    }
    ~MallardDuck();
    void quack() override {
        std::cout << "Quack!\n";
    }
    void fly() override{
        std::cout << "I'm Flying!\n";
    }
};

#endif // MALLARDDUCK_H
