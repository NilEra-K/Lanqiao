/****************************************************
	本节内容:
	多继承语法
	语法: 
	class 子类 : 继承方式 父类1,继承方式 父类2...
	多继承可能会引发父类中有同名成员的出现 	
	需要加作用域区分 
	C++实际开发中不建议使用多继承  
	***总结:多继承中如果父类出现了同名情况.
	子类使用时要加作用域 
****************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base1{
public:
	Base1()
	{
		m_A=100;
	}
	int m_A;
};
class Base2{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
class Son:public Base1,public Base2{
public:
	Son()
	{
		m_C=300;
		m_D=400;
	}
	int m_C;
	int m_D;
};
void test_1()
{
	Son s;
	cout<<"Size Of Son :"<<sizeof(s)<<endl;
	cout<<s.Base1::m_A <<endl;
	cout<<s.Base2::m_A <<endl;
}
int main()
{
	test_1();
	return 0;
} 
#endif

