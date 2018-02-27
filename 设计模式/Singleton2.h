#include<iostream>
#include<mutex>
class CSingleton2
{
public:
    ~CSingleton2(){}
    static CSingleton2 * getInstance()
    {
        if (m_instance == nullptr)
        {
            std::lock_guard<std::mutex> lgd(m_mt);
            if (m_instance == nullptr)
            {
                m_instance = new CSingleton2;
            }
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
        std::cout << "CSingleton2" << std::endl;
    }
private:
    CSingleton2(){}
    CSingleton2 & operator=(const CSingleton2 &) = delete;
    CSingleton2(const CSingleton2 &) = delete;
private:
    static CSingleton2 * m_instance;
    static std::mutex m_mt;
};

CSingleton2 * CSingleton2::m_instance = nullptr;
std::mutex CSingleton2::m_mt;