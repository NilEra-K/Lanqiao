/************************************************
	本节内容:
	类模板中成员函数创建时机 
	
	类模板中成员函数和普通类中成员函数创建时机
	是有区别的 
	1.普通类中的成员函数一开始就可以创建 
	2.类模板中的成员函数在调用时才创建  
************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

class Person1{
public:
	void showPerson1()
	{
		cout<<"Person1 Show"<<endl;
	 } 
}; 
class Person2{
public:
	void showPerson2()
	{
		cout<<"Person2 Show"<<endl;
	 } 
}; 
template<class T>
class MyClass{
public:
	T obj;
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}
}; 
void test_1()
{
	MyClass<Person1> m;
	m.fun1();
	m.fun2();
}
int main()
{
	test_1();
	return 0;
} 
#endif
