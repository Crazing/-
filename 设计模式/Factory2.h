class SingleCore2
{
public:
    virtual void Show() = 0;
};
//单核A  
class SingleCoreA2 : public SingleCore2
{
public:
    void Show() { std::cout << "SingleCore A2" << std::endl; }
};
//单核B  
class SingleCoreB2 : public SingleCore2
{
public:
    void Show() { std::cout << "SingleCore B2" << std::endl; }
};
class Factory2
{
public:
    virtual SingleCore2* CreateSingleCore() = 0;
};
//生产A核的工厂  
class FactoryA2 : public Factory2
{
public:
    SingleCoreA2* CreateSingleCore() { return new SingleCoreA2; }
};
//生产B核的工厂  
class FactoryB2 : public Factory2
{
public:
    SingleCoreB2* CreateSingleCore() { return new SingleCoreB2; }
};