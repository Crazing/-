class CSingleton3
{
public:
    ~CSingleton3(){}
    static CSingleton3 * getInstance()
    {
        static CSingleton3 ins;
        return &ins;
    }
    void print()
    {
        std::cout << "CSingleton3" << std::endl;
    }
private:
    CSingleton3(){}
    CSingleton3 & operator=(const CSingleton3 &) = delete;
    CSingleton3(const CSingleton3 &) = delete;
};