//����һ��������࣬���е�ԭ�Ͷ����������̳У�
class prototype
{
public:
    prototype(){}
    virtual ~prototype(){}
    virtual prototype* clone() = 0;//���麯������Ҫ���̳�������ʵ��
};

// ������Prototype,ʵ��Clone����
class concreateprototype1 :public prototype
{
public:
    concreateprototype1();
    concreateprototype1(const concreateprototype1&);
    virtual ~concreateprototype1();
    virtual prototype* clone();
};

// ������Prototype,ʵ��Clone����
class concreateprototype2 :public prototype
{
public:
    concreateprototype2();
    concreateprototype2(const concreateprototype2&);
    virtual ~concreateprototype2();
    virtual prototype* clone();
};