enum CTYPE { COREA1, COREB1 };
class SingleCore1
{
public:
    virtual void Show() = 0;
};
//单核A  
class SingleCoreA1 : public SingleCore1
{
public:
    void Show() { std::cout << "SingleCore A1" << std::endl; }
};
//单核B  
class SingleCoreB1 : public SingleCore1
{
public:
    void Show() { std::cout << "SingleCore B1" << std::endl; }
};
//唯一的工厂，可以生产两种型号的处理器核，在内部判断  
class Factory1
{
public:
    SingleCore1* CreateSingleCore(enum CTYPE ctype)
    {
        if (ctype == COREA1) //工厂内部判断  
            return new SingleCoreA1(); //生产核A  
        else if (ctype == COREB1)
            return new SingleCoreB1(); //生产核B  
        else
            return NULL;
    }
};