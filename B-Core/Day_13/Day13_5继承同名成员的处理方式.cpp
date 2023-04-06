/*************************
	本节内容:
	继承同名成员处理方式 
*************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	Base()
	{
		m_A=10;
	}
	void func()
	{
		cout<<"BASE - FUNC 调用！"<<endl; 
	}
	void func(int a)
	{
		cout<<"BASE - FUNC(INT A) 调用！"<<endl; 
	}
	int m_A;
};
class Son : public Base{
public:
	Son()
	{
		m_A=100;
	}
	void func()
	{
		cout<<"SON - FUNC 调用！"<<endl; 
	}
	void func(int a)
	{
		cout<<"SON - FUNC(INT A) 调用！"<<endl; 
	}

	int m_A;
};
void test_1()
{
	Son s;
	cout<<s.m_A <<endl;
	cout<<s.Base::m_A <<endl;
	//s 的 父类中的 m_A ; 
}
void test_2()
{
	Son s;
	s.func();
	s.func(10);
	
	s.Base::func();
	s.Base::func(10);
}
//当子类与父类拥有同名的成员函数,子类会隐藏父类中所有版本的同名成员函数
//如果想访问父亲中被隐藏的同名成员函数,需要加父亲的作用域 
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
