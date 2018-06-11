// Virtoul function.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
public :
	virtual void print()
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
	A a;
	B b;
	A *s = &a;
	A *p = &b;
	s->print();
	p->print();
	return 0;
}