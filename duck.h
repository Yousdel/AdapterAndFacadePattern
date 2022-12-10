#ifndef DUCK_H
#define DUCK_H

#include <iostream>

#include "flybehavior.h"
#include "quackbehavior.h"

using namespace std;

class Duck
{
public:
    Duck()    {}
    virtual ~Duck( )  {}
    virtual void quack()=0;
    virtual void fly()=0;
};

#endif // DUCK_H
