/*************************************
	本节内容:
	掌握类模板成员函数分文件编写产生的 
	问题以及解决方式 
 	
	问题--类模板中成员函数创建时机是在 
	调用阶段,导致分文件编写时链接不到 
	
	解决方式--
	1.直接包含.cpp源文件 
	2.将声明和实现写到同一个文件中,并更 
	改后缀名为.hpp,hpp是约定的名称(并不 
	强制) 
*************************************/
#if 1
#include<bits/stdc++.h>
#include"#1.11Person.h" 
//1.直接包含.cpp源文件 
#include"#1.11Person.cpp"
//2.将声明和实现写到同一个文件中,并更改后缀名为.hpp,hpp是约定的名称(并不强制) 
//#include"#1.11Person.hpp" 
using namespace std;
/*------------------------------------*/
/*将此段代码放到 "#1.11Person.h"中 
template<class T1,class T2>
class Person{
public:

	Person(T1 name,T2 age); 
	void showPerson(); 
	
	T1 m_Name;
	T2 m_Age;
}; 
*/
/*------------------------------------*/
/*将此段代码放到 "#1.11Person.cpp"中 
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
	this->m_Name=name;
	this->m_Age=age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
	cout<<"Name: "<<this->m_Name<<endl<<"Age : "<<this->m_Age<<endl;
}
*/
/*------------------------------------*/
void test_1()
{
	Person<string,int> p("Tom",20);
	p.showPerson();
}
int main()
{
	test_1();
	return 0;
}
#endif
