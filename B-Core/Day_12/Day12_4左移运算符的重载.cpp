/****************************
	本节知识:
	左移运算符的重载 " << "
	作用:可以输出自定义数据类型 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
	friend ostream operator<<(ostream& out,Person&p);
public:
	Person(int a,int b)
	{
		m_A =a;
		m_B =b;
	}
	
private:
	int m_A;
	int m_B;
	//成员函数,不适合重载<<,因为它做出来的效果和传统的cout格式正好相反
	//p<<cout 
	/*
	void operator<<(Person& p)
	{
		cout<<"m_A :"<<p.m_A<<"m_B :"<<p.m_B<<endl;
	}
	*/	
};
ostream& operator<<(ostream&cout,Person& p)
{/*返回值是ostream.用引用的方式传入是因为引用的对象只能有一个*/
	cout<<"m_A :"<<p.m_A<<endl<<"m_B :"<<p.m_B<<endl;
	return cout;
}
int main()
{
	/*
		cout的运算原理:
		cout和"Hello"运算后变成"Hello"
		"Hello"再和" "运算变成"Hello "
		"Hello "再和"World"运算变成"Hello World"
		"Hello World"再和endl运算 
	*/
	cout<<"Hello"<<" "<<"World"<<endl;//链式编程
	Person p1(10,20);
	cout<<p1;
	return 0;
}
#endif
