// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CBase
{
protected:
	int a;
public:
	CBase();
	CBase(int c);
	void display();
};
CBase::CBase()
{
	a = 0;
}
CBase::CBase(int c)
{
	a = c;
}
void CBase::display()
{
	cout << "a = " << a << endl;
}
class CDerived :public CBase
{
public:
	CDerived()
	{
		a = 0;
	}
	CDerived(int c)
	{
		a = c;
	}
};
int main()
{
	CDerived od(202);
	od.display();
	return 0;
}


