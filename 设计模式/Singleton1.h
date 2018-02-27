class CSingleton1
{
public:
    ~CSingleton1(){}
    static CSingleton1 * getInstance()
    {
        if (m_instance == nullptr)
        {
            m_instance = new CSingleton1;
        }
        return m_instance;
    }
    static void delInstance()
    {
        if (m_instance)
        {
            delete m_instance;
            m_instance = nullptr;
        }
    }
    void print()
    {
        std::cout << "CSingleton1" << std::endl;
    }
private:
    CSingleton1(){}
    CSingleton1 & operator=(const CSingleton1 &) = delete;
    CSingleton1(const CSingleton1 &) = delete;
private:
    static CSingleton1 * m_instance;
};

CSingleton1 * CSingleton1::m_instance = nullptr;