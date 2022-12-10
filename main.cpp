#include <QCoreApplication>

#include "mallardduck.h"
#include "wildturkey.h"
#include "turkeyadapter.h"

void testDuck(Duck *duck){
    duck->quack();
    duck->fly();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck= new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);

    std::cout << "The Turkey says..\n";
    turkey->gobble();
    turkey->fly();

    std::cout << "The Duck says..\n";
    testDuck(duck);

    std::cout << "The TurkeyAdapter says..\n";
    testDuck(turkeyAdapter);

    delete duck;
    delete turkey;
    delete turkeyAdapter;

    return a.exec();
}
