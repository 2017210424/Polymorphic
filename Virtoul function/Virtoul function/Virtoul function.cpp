// Virtoul function.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
public :
	void print()
	{
		cout << "This is A." << endl;
	}
};
class B : public A
{
public:
	void print()
	{
		cout << "This is B." << endl;
	}
};
int main()
{
	A *s;
	B *p;
	s = new A;
	p = new B;
	s->print();
	p->print();
	delete p;
	return 0;
}