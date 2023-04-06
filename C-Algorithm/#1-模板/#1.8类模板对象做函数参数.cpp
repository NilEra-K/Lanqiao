/***************************************************
	本节内容:
	类模板对象做函数参数 
	学习用类模板实例化出对象,
	像对象传参的方式 
	
	一共有三种传入方式:
	1.指定传入的类型--直接显式对象的数据类型 
	2.参数模板化--将对象中的参数变为模板进行传递 
	3.整个类模板化-- 将这个对象类型模板化进行传递 
***************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//类模板 
template<class T1,class T2>
class Person{
public:
	Person(T1 name,T2 age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	void showPerson()
	{
		cout<<"Name: "<<this->m_Name<<endl<<"Age : "<<this->m_Age<<endl;
	}
	T1 m_Name;
	T2 m_Age;
}; 
//一共有三种传入方式:
//*<较为常用>1.指定传入的类型--直接显式对象的数据类型 
void printPerson1(Person<string,int> &p)
{
	p.showPerson();
}
void test_1()
{
	Person<string,int> p1("孙悟空",100);
	printPerson1(p1);
}
//2.参数模板化--将对象中的参数变为模板进行传递 
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p)
{
	p.showPerson();
	cout<<"T1的类型是: "<<typeid(T1).name()<<endl;
	cout<<"T2的类型是: "<<typeid(T2).name()<<endl;
}
void test_2()
{
	Person<string,int> p2("猪八戒",90);
	printPerson2(p2);
}
//3.整个类模板化-- 将这个对象类型模板化进行传递 
template<class T> 
void printPerson3(T &p)
{
	p.showPerson();
	
}
void test_3()
{
	Person<string,int> p3("沙僧",80);
	printPerson3(p3); 
}
//如果我们想知道T1 or T2的数据类型是什么
//我们可以这样写:
//cout<<"T1的类型是: "<<typeid(T1).name()<<endl;

int main()
{
	test_1();
	test_2();
	test_3();
	return 0;
}
#endif
