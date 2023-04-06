/******************************
	本节内容: 
	继承构造和析构顺序 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	Base()
	{
		cout<<"BASE的构造函数的调用"<<endl; 
	}
	~Base()
	{
		cout<<"BASE的析构函数的调用"<<endl; 
	} 
}; 
//公共继承 
class Son:public Base{
public:
	Son()
	{
		cout<<"Son的构造函数的调用"<<endl; 
	}
	~Son()
	{
		cout<<"Son的析构函数的调用"<<endl; 
	} 
	/*-继承中,先调用父类的构造函数,再调用子类的构造函数,析构顺序与构造顺序相反-*/
};
void test_1()
{
	Son s;
	/*输出结果* 
	BASE的构造函数的调用 
	Son的构造函数的调用 
	Son的析构函数的调用 
	BASE的析构函数的调用 
	*/
	
}
int main()
{
	test_1();
	return 0;
}
#endif
