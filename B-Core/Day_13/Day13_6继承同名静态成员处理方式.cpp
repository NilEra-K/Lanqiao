/******************************
	本节内容:
	继承同名静态成员处理方式 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//静态成员和非静态成员出现同名,处理方式一致 
//访问子类同名成员 直接访问即可 
//访问父类同名成员 需要加作用域 
//总结 : 同名静态成员处理方式和非静态处理方式一样,只不过有两种访问方式(通过对象 和 通过类名) 
class Base{
public:
	static void func()
	{
		cout<<"BASE - FUNC 调用！"<<endl; 
	}
	static void func(int a)
	{
		cout<<"BASE - FUNC(INT A) 调用！"<<endl; 
	}
	static int m_A;
};

int Base::m_A=10;

class Son : public Base{
public:
	static void func()
	{
		cout<<"SON - FUNC 调用！"<<endl; 
	}
	static void func(int a)
	{
		cout<<"SON - FUNC(INT A) 调用！"<<endl; 
	}
	static int m_A;
};

int Son::m_A = 100; 

void test_1()
{
	//通过对象访问 
	Son s;
	cout<< s.m_A <<endl;
	cout<< s.Base::m_A <<endl;
	s.func();
	s.func(100);
	s.Base::func();
	s.Base::func(100);
	
	//通过类名访问
	cout<< Son::m_A  <<endl;
	cout<< Base::m_A <<endl;
	Son::func();
	Son::func(10);
	Base::func();
	Base::func(10);
}
int main()
{
	test_1();
	return 0;
}
#endif
