#include "AbstrateNumber.h"


#include<iostream>

using namespace std;

int main()
{
	realNumber realNum1(4.3);
	realNumber realNum2(16.4);
	realNum1 = realNum1.add(realNum2);
	realNum1.print();


	integerNumber intNum1(55);
	integerNumber intNum2(35);
	integerNumber intNum3(3);
	intNum3.print();
	intNum1.add(intNum2).print();



	complexNumber compNum1(6.5,5);
	complexNumber compNum2(7.3,3);
	complexNumber compNum3(-0.3,7);
	compNum1.add(compNum2).print();
	compNum2.mul(compNum3).print();
	//system("pause");
	return 0;
}


