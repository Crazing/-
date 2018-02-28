#include<iostream>
using namespace std;

// "ITarget"
class Target2
{
public:
	// Methods
	virtual void Request() {};
};

// "Adaptee"
class Adaptee2
{
public:
	// Methods
	void SpecificRequest()
	{
		cout << "Called SpecificRequest2()" << endl;
	}
};

// "Adapter"
class Adapter2 : public Target2
{
private:
	Adaptee2 *adaptee2;

public:
	Adapter2()
	{
		adaptee2 = new Adaptee2();
	}

	// Implements ITarget interface
	void Request()
	{
		// Possibly do some data manipulation
		// and then call SpecificRequest  
		adaptee2->SpecificRequest();
	}
};
