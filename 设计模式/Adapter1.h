#pragma once

#include<iostream>
using namespace std;

// "ITarget"
class Target1
{
public:
	// Methods
	virtual void Request() {};
};

// "Adaptee"
class Adaptee1
{
public:
	// Methods
	void SpecificRequest()
	{
		cout << "Called SpecificRequest1()" << endl;
	}
};

// "Adapter"
class Adapter1 : public Adaptee1, public Target1
{
public:
	// Implements ITarget interface
	void Request()
	{
		// Possibly do some data manipulation
		// and then call SpecificRequest  
		this->SpecificRequest();
	}
};