/**********************
	��������:
	ģ��ľ����� 
**********************/
#if 1
#include<bits/stdc++.h>
using namespace std;

template<class T>
void f_1(T a,T b)
{ 
	a=b;
}
//�������������ṩ�ĸ�ֵ����,��������a��b��һ������,���޷�ʵ���� 
template<class T>
void f_2(T a,T b)
{
	if(a>b){
		/**/
	}
 } 
//������������,���T��������������Person�������Զ�����������,Ҳ�޷�����ʹ��  
//Ϊ�˽����������,�ṩ��ģ������� 
//����Ϊ��Щ�ض��������ṩ���廯��ģ��  

class Person{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};
//��ͨ����ģ��  
template<class T>
bool myCompare(T& a,T&b)
{
	if(a==b){
		return true;
	}else{
		return false;
	}
	
}
//���廯,��ʽ���廯 
//���廯�������ں���ģ���  
template<>
bool myCompare(Person& p1,Person& p2)
{
	if(p1.m_Name==p2.m_Name&&p1.m_Age==p2.m_Age){
		return true;
	}else{
		return false;
	}
}
void test_1()
{
	int a=10;
	int b=20;
	
	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��  
	bool ret=myCompare(a,b);
	if(ret){
		cout<<"���"<<endl;
	}else{
		cout<<"�����"<<endl;
	}
}
void test_2()
{
	Person p1("����",18);
	Person p2("����",20);
	//�Զ����������Ͳ�����ò��������ͨ�ĺ���ģ�� 
	//���Դ������廯��Person�������͵�ģ��,�������⴦���������  
	bool ret=myCompare(p1,p2);
	if(ret){
		cout<<"���"<<endl;
	}else{
		cout<<"�����"<<endl;
	}	
}
int main()
{
	test_1();
	test_2(); 
	return 0;
}
#endif
