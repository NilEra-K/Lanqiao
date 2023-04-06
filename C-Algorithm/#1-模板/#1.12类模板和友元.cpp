/********************************************
	本节内容:
	类模板和友元 
	
	掌握类模板配合友元函数的类内实现 
	全局函数类内实现-直接在类内声明友元即可 
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2>
class Person{
public:
	//全局函数配合友元 类内实现 
	friend void printPerson(Person<T1,T2> &p)
	{
		cout<<"Name: "<<p.m_Name<<endl<<"Age : "<<p.m_Age<<endl; 
	}
	Person(T1 name,T2 age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
private:
	T1 m_Name;
	T2 m_Age;
}; 
void test_1()
{
	Person<string,int> p("Tom",20);
	printPerson(p);
}
int main()
{
	test_1();
	return 0;
}
#endif
