/***************************
	��������:
	C++����ģ�ͺ�thisָ�� 
***************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
/********************************
	��Ա�����ͳ�Ա�����ֿ����� 
********************************/
class Person{
public:
	
	int m_A;				//�Ǿ�̬��Ա����,ռ����ռ� 
	static int m_B;			//��̬��Ա����,��ռ����ռ� 
	void fun(){}			//������ռ����ռ�,���к�������һ������ʵ�� 
	static void func2(){}	//��̬��Ա����Ҳ��ռ����ռ� 
}; 
int Person::m_B=20; 
class B{
/**/
}; 
int main()
{
	Person p;
	cout<<sizeof(p)<<endl;
	/*������: 4 */
	/*�ɼ���Person��ռ�е�ֻ��m_A�Ŀռ�*/
	B b;
	cout<<sizeof(b)<<endl;
	/*������: 1 */
	/*�ն���ռ�ÿռ�Ϊ1,��ΪC++����������ն���Ҳ����һ���ֽڿռ�*/
	/*�����ֿն���ռ�ڴ��λ��*/
	/*ÿ������Ӧ��ռ�ж�һ�޶��Ŀռ�*/
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/****************************************************************
	this ָ��:
	
	����:ͨ��������������֪��C++��Ա�����Ǻǳ�Ա�����Ƿֿ��洢�� 
	ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ�����ն��ͬ���� 
	�Ķ������һ����� 
	��ô������:��һ���������������Ǹ���������Լ����أ� 
	
	����:C++ͨ������Ķ���ָ��,thisָ��,����������⡣
	-thisָ��ָ�򱻵��õĳ�Ա���������Ķ��� 
	-thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ�� 
	-thisָ�벻��Ҫ����,ֱ��ʹ�ü��� 

	thisָ�����;:
	1.���βκͳ�Ա����ͬ��ʱ,����thisָ�������� 
	2.����ķǾ�̬��Ա�����з��ض�����,��ʹ��return *this 
****************************************************************/

class Person{
public:
//1.���βκͳ�Ա����ͬ��ʱ,����thisָ�������� 
//��Ȼ��һ����ϰ���Ǹ��õ� ����ֱ������ m_age ���Խ��������� 
	Person(int age)
	{
		this->age = age;
		//age=age;//�޷����� 
	}
//2.����ķǾ�̬��Ա�����з��ض�����,��ʹ��return *this 
	Person& PersonAddPerson(Person p)
	//Ϊʲô�� '&' : 
	//�������÷���,����ÿ������캯��
	//�൱�ڷ���p2��ͬ����һ��Person(ֻ��ֵ����30) 
	{
		this->age+=p.age;
		return *this;//������---ָ�벿������ 
	} 
	int age; 
}; 


int main()
{
	Person p1(10);
	Person p2(20);
	//��ʽ���˼�� 
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout<<p2.age<<endl;

	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/************************************************
	��ָ����ʳ�Ա���� 
	
	C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա������
	����ҲҪע����û���õ�thisָ��
	����õ� this ָ��,��Ҫ�����жϴ���Ľ�׳�� 
************************************************/
class Person{
public:
	void showClassName()
	{
		cout<<"����Person��"<<endl;
	}
	void showPerson()
	{
		if(this == NULL)
		{
			return;
		}
		cout<<m_Age<<endl; //this->m_Age,this �ǿյ� 
	}
	int m_Age;
};
void test_1()
{
	Person* p=NULL;
	p->showClassName();	//this ���Ե��ó�Ա���� 
	p->showPerson();	//����,�����Ա�������õ���thisָ��,�Ͳ������� 
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*****************************************************************
	Const���γ�Ա����
	������:
		��Ա�������const�����ǳ��������Ϊ������ 
		�������ڲ������޸ĳ�Ա���� 
		��Ա��������ʱ��ӹؼ���mutable��,�ڳ���������Ȼ�����޸� 
	������:
		��������ǰ��const�ɸö���Ϊ������
		������ֻ�ܵ��ó����� 
*****************************************************************/
class Person{
public:
	Person()
	{
		m_A=0;
		m_B=0;
	} 
	//������ �ں��������const 
	void showPerson() const
	{
		//this �ı���
		//Type* const pointer
		//���������const���ε���thisָ��,��ָ���ָ���ֵҲ�����޸�
		//���� const Type* pointer
		 
		this->m_B=100;
	}
	void myfunc()
	{
		
	}
	
	int m_A;
	mutable int m_B;
	//�����int m_B;
	//��showPerson()�������thisָ���޷��޸� m_B ��ֵ 
};
void test_2()
{
	Person p;
	cout<<p.m_A <<endl;
	cout<<p.m_B <<endl;
	p.showPerson();
	cout<<p.m_B <<endl;
	
	//������
	const Person p1; 
	cout<<p1.m_A <<endl;
	cout<<p1.m_B <<endl;
	//��������ǰ��const�ɸö���Ϊ������
	//������ֻ�ܵ��ó����� 
	p1.m_A=10;//�����󲻿��޸ĳ�Ա������ֵ,����,���Է��� 
	p1.m_B=10;//�����������޸�mutable���εĳ�Ա���� 

	//������ֻ�ܵ��ó�����
	p1.showPerson();
	p1.myfunc();//�޷����� 
	
}

int main()
{
	
	return 0;
}
#endif
