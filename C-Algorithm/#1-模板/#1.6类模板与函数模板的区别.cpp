/*********************************************
	��������:
	��ģ���뺯��ģ�������:
	1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ 
	2. ��ģ����ģ������б��п�����Ĭ�ϲ���  
*********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class NameType,class AgeType = int>
class Person{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	void showPerson()
	{
		cout<<"Name: "<<this->m_Name<<endl<<"Age: "<<this->m_Age<<endl;
	}
	NameType m_Name;
	AgeType m_Age;
}; 

//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ 
void test_1()
{
	//Person p1("�����",999);//ERROR,��ģ��ʹ�õ�ʱ�򲻿���ʹ���Զ��Ƶ����� 
	Person<string,int> p2("��˽�",800);//����ʹ����ʽָ�����͵ķ�ʽ  
}

//2. ��ģ����ģ������б��п�����Ĭ�ϲ��� 
void test_2()
{
	Person<string> p3("ɳɮ",700);
	p3.showPerson();
}
int main()
{
	test_1();
	test_2();
	return 0;
} 
#endif
