/****************************
	����֪ʶ:
	��������������� 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
	friend ostream& operator++(ostream& out,Person& p);
public:
	Person()
	{
		m_A=0;
		m_B=0;
	}
	Person(int a,int b)
	{
		m_A=0;
		m_B=0;
	}
	//���������������������:operator++
	//ǰ�õ���
	Person&  operator++()
	{
		//������ 
		this->m_A++;
		this->m_B++;
		//�󷵻ر���
		return *this; 
	}
	//���õ���
	Person&  operator++(int) 
	//intֻ�Ǹ�ռλ����,��������ǰ�õ����ͺ��õ��� 
	{
		//�ȷ��� 
		Person temp=*this;
		//������ 
		m_A++;
		m_B++; 
		return *this;
	} 
	
private:
	int m_A;
	int m_B;
};

operator<<(ostream& out,Person& p)
{
	out<<"m_A:"<<p.m_A <<
}
int main()
{
	int i=1;
	//i++ ++ ++ ++;//���ص���ֵ(ֵ����) 
	++ ++ ++ ++i;//���ص������� 
	cout<<i<<endl;
	//ǰ�õ���,����ֵ���������õ�
	//���õ���,����ֵ��ֵ���� 
	Person p1(1,2);
	cout<<p1<<endl;
	return 0;
}
#endif
