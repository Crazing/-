#include<iostream>
#include"Singleton1.h"
#include"Singleton2.h"
#include"Singleton3.h"
#include"Singleton4.h"
#include"Factory1.h"
#include"Factory2.h"
#include"Factory3.h"
#include"builder.h"
#include"prototype.h"
#include"Adapter1.h"
#include"Adapter2.h"
#include"Bridge.h"
using namespace std;

int main()
{
    //桥接模式
    HandsetBrand *hb;
    hb = new HandsetBrandM();
    hb->setHandsetSoft(new HandsetGame());
    hb->run();
    hb->setHandsetSoft(new HandsetAddressList());
    hb->run();

	//适配器模式
	Target1 *t1 = new Adapter1();
	t1->Request();
	Target2 *t2 = new Adapter2();
	t2->Request();

    //原型模式
    prototype* proto1 = new concreateprototype1();
    proto1->clone();
    prototype* proto2 = new concreateprototype2();
    proto2->clone();

	//建造者模式
	Assemble *assembleA = new AssembleCarA();
	Factory *factoryA = new Factory(assembleA);
	factoryA->assembleCar();
	factoryA->getCar()->disPlay();
	Assemble *assembleB = new AssembleCarB();
	Factory *factoryB = new Factory(assembleB);
	factoryB->assembleCar();
	factoryB->getCar()->disPlay();

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