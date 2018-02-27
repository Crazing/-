enum CTYPE { COREA1, COREB1 };
class SingleCore1
{
public:
    virtual void Show() = 0;
};
//����A  
class SingleCoreA1 : public SingleCore1
{
public:
    void Show() { std::cout << "SingleCore A1" << std::endl; }
};
//����B  
class SingleCoreB1 : public SingleCore1
{
public:
    void Show() { std::cout << "SingleCore B1" << std::endl; }
};
//Ψһ�Ĺ������������������ͺŵĴ������ˣ����ڲ��ж�  
class Factory1
{
public:
    SingleCore1* CreateSingleCore(enum CTYPE ctype)
    {
        if (ctype == COREA1) //�����ڲ��ж�  
            return new SingleCoreA1(); //������A  
        else if (ctype == COREB1)
            return new SingleCoreB1(); //������B  
        else
            return NULL;
    }
};