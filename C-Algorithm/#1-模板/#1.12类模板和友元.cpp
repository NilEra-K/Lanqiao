/********************************************
	��������:
	��ģ�����Ԫ 
	
	������ģ�������Ԫ����������ʵ�� 
	ȫ�ֺ�������ʵ��-ֱ��������������Ԫ���� 
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2>
class Person{
public:
	//ȫ�ֺ��������Ԫ ����ʵ�� 
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
