//����  
class SingleCore3
{
public:
    virtual void Show() = 0;
};
class SingleCoreA3 : public SingleCore3
{
public:
    void Show() { std::cout << "Single Core A3" << std::endl; }
};
class SingleCoreB3 :public SingleCore3
{
public:
    void Show() { std::cout << "Single Core B3" << std::endl; }
};
//���  
class MultiCore3
{
public:
    virtual void Show() = 0;
};
class MultiCoreA3 : public MultiCore3
{
public:
    void Show() { std::cout << "Multi Core A3" << std::endl; }

};
class MultiCoreB3 : public MultiCore3
{
public:
    void Show() { std::cout << "Multi Core B3" << std::endl; }
};
//����  
class CoreFactory3
{
public:
    virtual SingleCore3* CreateSingleCore() = 0;
    virtual MultiCore3* CreateMultiCore() = 0;
};
//����A��ר����������A�ͺŵĴ�����  
class FactoryA3 :public CoreFactory3
{
public:
    SingleCore3* CreateSingleCore() { return new SingleCoreA3(); }
    MultiCore3* CreateMultiCore() { return new MultiCoreA3(); }
};
//����B��ר����������B�ͺŵĴ�����  
class FactoryB3 : public CoreFactory3
{
public:
    SingleCore3* CreateSingleCore() { return new SingleCoreB3(); }
    MultiCore3* CreateMultiCore() { return new MultiCoreB3(); }
};