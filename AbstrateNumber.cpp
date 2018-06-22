#include "AbstrateNumber.h"

void AbstrateNumber::print()
{
	cout << "this number is:";
}
AbstrateNumber AbstrateNumber::add(const AbstrateNumber &)
{
	return AbstrateNumber();
}

AbstrateNumber AbstrateNumber::mul(const AbstrateNumber &)
{
	return AbstrateNumber();
}


//realNumber
realNumber::realNumber(double d=0)
{
	data = d;
}

void realNumber::print()
{
	AbstrateNumber::print();
	cout << data << endl;
}

realNumber realNumber::add(const realNumber & other)
{
	data = data + other.data;
	return *this;
}

double realNumber::getData()
{
	return data;
}


//integerNumber
integerNumber::integerNumber(double d)
	:realNumber(d)
{
	data = (int)(data);
}

int integerNumber::getNumber()
{
	return data;
}

integerNumber integerNumber::add(const integerNumber & other)
{
	data = other.data + data;
	return *this;
}


complexNumber::complexNumber(double a=0, double b=0)
{
	real = a;
	virt = b;
}

void complexNumber::print()
{
	AbstrateNumber::print();
	cout << real << " + " << virt << "i" << endl;
}

complexNumber complexNumber::add(const complexNumber & other)
{
	real = other.real + real;
	virt = other.virt + virt;
	return *this;
}

complexNumber complexNumber::mul(const complexNumber & other)
{
	real = (this->real)*other.real - (this->virt)*other.virt;
	virt = (this->real)*other.virt + (this->virt)*other.real;
	return *this;
}

