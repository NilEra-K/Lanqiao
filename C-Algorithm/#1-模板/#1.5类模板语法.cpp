/************************************************

	��������:
	��ģ���﷨ 
	����һ��ͨ�������еĳ�Ա �������Ϳ��Բ����� 
	ָ��,��һ����������������� 
	
	�﷨:
	template<typename T>
	template--��������ģ��
	typename--�������ķ�����һ���������� 
	T--ͨ�õ���������   
************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class NameType,class AgeType>
class Person{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	void showPerson()
	{
		cout<<"Name: "<<this->m_Name<<"Age: "<<this->m_Age<<endl;
	}
	NameType m_Name;
	AgeType m_Age;
}; 
void test_1()
{
	//ָ��NameTypeΪstring���� AgeTypeΪint���� 
	Person<string,int> p1("�����",999);
	p1.showPerson();
}
int main()
{
	test_1();
	return 0;
} 
#endif
