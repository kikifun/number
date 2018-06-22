#ifndef ABSTREATENUMBER_H
#define ABSTREATENUMBER_H
#include<iostream>
using namespace std;

class AbstrateNumber
{
public:
	virtual void print();
	virtual AbstrateNumber add(const AbstrateNumber&);
	virtual AbstrateNumber mul(const AbstrateNumber&);
};

class realNumber:public AbstrateNumber
{
public:
	realNumber(double);
	virtual void print();
	virtual realNumber add(const realNumber&);
	double getData();
protected:
	double data;
};

class integerNumber:public realNumber
{
public:
	integerNumber(double);
	int getNumber();
	virtual integerNumber add(const integerNumber&);
};

class complexNumber :public AbstrateNumber
{
private:
	double real;
	double virt;
public:
	complexNumber(double , double );
	virtual void print();
	virtual complexNumber add(const complexNumber &);
	virtual complexNumber mul(const complexNumber &);
};
#endif
