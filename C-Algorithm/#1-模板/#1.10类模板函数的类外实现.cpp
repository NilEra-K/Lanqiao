/***************************
	��������:
	��ģ���Ա��������ʵ�� 
***************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2>
class Person{
public:
	//��Ա������������  
	Person(T1 name,T2 age); 
	void showPerson(); 
	
	T1 m_Name;
	T2 m_Age;
}; 
//���캯������ʵ��  
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
	this->m_Name=name;
	this->m_Age=age;
}
//��Ա��������ʵ�� 
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
	cout<<"Name: "<<this->m_Name<<endl<<"Age : "<<this->m_Age<<endl;
}
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
