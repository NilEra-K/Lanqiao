/****************************
	����֪ʶ:
	��������������� " << "
	����:��������Զ����������� 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
	friend ostream operator<<(ostream& out,Person&p);
public:
	Person(int a,int b)
	{
		m_A =a;
		m_B =b;
	}
	
private:
	int m_A;
	int m_B;
	//��Ա����,���ʺ�����<<,��Ϊ����������Ч���ʹ�ͳ��cout��ʽ�����෴
	//p<<cout 
	/*
	void operator<<(Person& p)
	{
		cout<<"m_A :"<<p.m_A<<"m_B :"<<p.m_B<<endl;
	}
	*/	
};
ostream& operator<<(ostream&cout,Person& p)
{/*����ֵ��ostream.�����õķ�ʽ��������Ϊ���õĶ���ֻ����һ��*/
	cout<<"m_A :"<<p.m_A<<endl<<"m_B :"<<p.m_B<<endl;
	return cout;
}
int main()
{
	/*
		cout������ԭ��:
		cout��"Hello"�������"Hello"
		"Hello"�ٺ�" "������"Hello "
		"Hello "�ٺ�"World"������"Hello World"
		"Hello World"�ٺ�endl���� 
	*/
	cout<<"Hello"<<" "<<"World"<<endl;//��ʽ���
	Person p1(10,20);
	cout<<p1;
	return 0;
}
#endif
