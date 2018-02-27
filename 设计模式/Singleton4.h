class CSingleton4
{
public:
    ~CSingleton4(){}
    static CSingleton4 * getInstance()
    {
        return &m_instance;
    }
    void print()
    {
        std::cout << "CSingleton4" << std::endl;
    }
private:
    CSingleton4(){}
    CSingleton4 & operator=(const CSingleton4 &) = delete;
    CSingleton4(const CSingleton4 &) = delete;

private:
    static CSingleton4 m_instance;
};

CSingleton4 CSingleton4::m_instance;