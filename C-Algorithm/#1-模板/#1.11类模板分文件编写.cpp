/*************************************
	��������:
	������ģ���Ա�������ļ���д������ 
	�����Լ������ʽ 
 	
	����--��ģ���г�Ա��������ʱ������ 
	���ý׶�,���·��ļ���дʱ���Ӳ��� 
	
	�����ʽ--
	1.ֱ�Ӱ���.cppԴ�ļ� 
	2.��������ʵ��д��ͬһ���ļ���,���� 
	�ĺ�׺��Ϊ.hpp,hpp��Լ��������(���� 
	ǿ��) 
*************************************/
#if 1
#include<bits/stdc++.h>
#include"#1.11Person.h" 
//1.ֱ�Ӱ���.cppԴ�ļ� 
#include"#1.11Person.cpp"
//2.��������ʵ��д��ͬһ���ļ���,�����ĺ�׺��Ϊ.hpp,hpp��Լ��������(����ǿ��) 
//#include"#1.11Person.hpp" 
using namespace std;
/*------------------------------------*/
/*���˶δ���ŵ� "#1.11Person.h"�� 
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
/*���˶δ���ŵ� "#1.11Person.cpp"�� 
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
