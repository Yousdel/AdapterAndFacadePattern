#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H

#include "turkey.h"
#include "duck.h"

class TurkeyAdapter: public Duck
{
private:
    Turkey *turkey;
public:
    TurkeyAdapter(Turkey *turkey)
    {
        this->turkey = turkey;
    }
    ~TurkeyAdapter(){    }
    void fly() override{
        for(int i=0; i < 5; ++i) {
            turkey->fly();
        }
    }
    void quack() override{
        turkey->gobble();
    }
};

#endif // TURKEYADAPTER_H
