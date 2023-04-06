/****************************
	本节知识:
	递增运算符的重载 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
	friend ostream& operator++(ostream& out,Person& p);
public:
	Person()
	{
		m_A=0;
		m_B=0;
	}
	Person(int a,int b)
	{
		m_A=0;
		m_B=0;
	}
	//编译器给函数起的名字是:operator++
	//前置递增
	Person&  operator++()
	{
		//先自增 
		this->m_A++;
		this->m_B++;
		//后返回本身
		return *this; 
	}
	//后置递增
	Person&  operator++(int) 
	//int只是个占位参数,用于区分前置递增和后置递增 
	{
		//先返回 
		Person temp=*this;
		//后自增 
		m_A++;
		m_B++; 
		return *this;
	} 
	
private:
	int m_A;
	int m_B;
};

operator<<(ostream& out,Person& p)
{
	out<<"m_A:"<<p.m_A <<
}
int main()
{
	int i=1;
	//i++ ++ ++ ++;//返回的是值(值传递) 
	++ ++ ++ ++i;//返回的是引用 
	cout<<i<<endl;
	//前置递增,返回值类型是引用的
	//后置递增,返回值是值传递 
	Person p1(1,2);
	cout<<p1<<endl;
	return 0;
}
#endif
