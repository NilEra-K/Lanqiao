/***************************************************
	��������:
	��ģ��������������� 
	ѧϰ����ģ��ʵ����������,
	����󴫲εķ�ʽ 
	
	һ�������ִ��뷽ʽ:
	1.ָ�����������--ֱ����ʽ������������� 
	2.����ģ�廯--�������еĲ�����Ϊģ����д��� 
	3.������ģ�廯-- �������������ģ�廯���д��� 
***************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//��ģ�� 
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
//һ�������ִ��뷽ʽ:
//*<��Ϊ����>1.ָ�����������--ֱ����ʽ������������� 
void printPerson1(Person<string,int> &p)
{
	p.showPerson();
}
void test_1()
{
	Person<string,int> p1("�����",100);
	printPerson1(p1);
}
//2.����ģ�廯--�������еĲ�����Ϊģ����д��� 
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p)
{
	p.showPerson();
	cout<<"T1��������: "<<typeid(T1).name()<<endl;
	cout<<"T2��������: "<<typeid(T2).name()<<endl;
}
void test_2()
{
	Person<string,int> p2("��˽�",90);
	printPerson2(p2);
}
//3.������ģ�廯-- �������������ģ�廯���д��� 
template<class T> 
void printPerson3(T &p)
{
	p.showPerson();
	
}
void test_3()
{
	Person<string,int> p3("ɳɮ",80);
	printPerson3(p3); 
}
//���������֪��T1 or T2������������ʲô
//���ǿ�������д:
//cout<<"T1��������: "<<typeid(T1).name()<<endl;

int main()
{
	test_1();
	test_2();
	test_3();
	return 0;
}
#endif
