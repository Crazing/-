#include<iostream>
#include"Singleton1.h"
#include"Singleton2.h"
#include"Singleton3.h"
#include"Singleton4.h"
#include"Factory1.h"
#include"Factory2.h"
#include"Factory3.h"
using namespace std;

int main()
{
    //工厂模式
    Factory1 fact1;
    SingleCore1* coreA1 = fact1.CreateSingleCore(COREA1);
    SingleCore1* coreB1 = fact1.CreateSingleCore(COREB1);
    coreA1->Show();
    coreB1->Show();

    FactoryA2 factA2;
    FactoryB2 factB2;
    SingleCore2* coreA2 = factA2.CreateSingleCore();
    SingleCore2* coreB2 = factB2.CreateSingleCore();
    coreA2->Show();
    coreB2->Show();

    FactoryA3 factA3;
    FactoryB3 factB3;
    SingleCore3* scoreA3 = factA3.CreateSingleCore();
    SingleCore3* scoreB3 = factB3.CreateSingleCore();
    MultiCore3*  mcoreA3 = factA3.CreateMultiCore();
    MultiCore3*  mcoreB3 = factB3.CreateMultiCore();
    scoreA3->Show();
    scoreB3->Show();
    mcoreA3->Show();
    mcoreB3->Show();

    //单例模式
    CSingleton1 *instance1 = CSingleton1::getInstance();
    instance1->print();

    CSingleton2 *instance2 = CSingleton2::getInstance();
    instance2->print();

    CSingleton3 *instance3 = CSingleton3::getInstance();
    instance3->print();

    CSingleton4 *instance4 = CSingleton4::getInstance();
    instance4->print();

    return 0;
}