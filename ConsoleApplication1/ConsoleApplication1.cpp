// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int foot,int inch)
	{
		feet = foot + inch / 12;
		inches = inch % 12;
	}
	void display()
	{
		cout << feet <<" feet "<< inches <<"inches"<< endl;
	}
	CFeet add(CFeet&o)
	{
		CFeet temp;
		temp.setvalue(feet + o.feet, inches + o.inches);
		return temp;
	}
	CFeet operator +(CFeet&o)
	{
		CFeet temp;
		temp.setvalue(feet + o.feet, inches + o.inches);
		return temp;
	}
};

int main()
{
	CFeet A, B, C;
	A.setvalue(10, 10);
	B.setvalue(10, 10);
	C = A + B;
	C.display();
    return 0;
}

