/*************************
	��������:
	�̳�ͬ����Ա����ʽ 
*************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	Base()
	{
		m_A=10;
	}
	void func()
	{
		cout<<"BASE - FUNC ���ã�"<<endl; 
	}
	void func(int a)
	{
		cout<<"BASE - FUNC(INT A) ���ã�"<<endl; 
	}
	int m_A;
};
class Son : public Base{
public:
	Son()
	{
		m_A=100;
	}
	void func()
	{
		cout<<"SON - FUNC ���ã�"<<endl; 
	}
	void func(int a)
	{
		cout<<"SON - FUNC(INT A) ���ã�"<<endl; 
	}

	int m_A;
};
void test_1()
{
	Son s;
	cout<<s.m_A <<endl;
	cout<<s.Base::m_A <<endl;
	//s �� �����е� m_A ; 
}
void test_2()
{
	Son s;
	s.func();
	s.func(10);
	
	s.Base::func();
	s.Base::func(10);
}
//�������븸��ӵ��ͬ���ĳ�Ա����,��������ظ��������а汾��ͬ����Ա����
//�������ʸ����б����ص�ͬ����Ա����,��Ҫ�Ӹ��׵������� 
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
