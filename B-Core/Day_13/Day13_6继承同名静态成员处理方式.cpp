/******************************
	��������:
	�̳�ͬ����̬��Ա����ʽ 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//��̬��Ա�ͷǾ�̬��Ա����ͬ��,����ʽһ�� 
//��������ͬ����Ա ֱ�ӷ��ʼ��� 
//���ʸ���ͬ����Ա ��Ҫ�������� 
//�ܽ� : ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ��,ֻ���������ַ��ʷ�ʽ(ͨ������ �� ͨ������) 
class Base{
public:
	static void func()
	{
		cout<<"BASE - FUNC ���ã�"<<endl; 
	}
	static void func(int a)
	{
		cout<<"BASE - FUNC(INT A) ���ã�"<<endl; 
	}
	static int m_A;
};

int Base::m_A=10;

class Son : public Base{
public:
	static void func()
	{
		cout<<"SON - FUNC ���ã�"<<endl; 
	}
	static void func(int a)
	{
		cout<<"SON - FUNC(INT A) ���ã�"<<endl; 
	}
	static int m_A;
};

int Son::m_A = 100; 

void test_1()
{
	//ͨ��������� 
	Son s;
	cout<< s.m_A <<endl;
	cout<< s.Base::m_A <<endl;
	s.func();
	s.func(100);
	s.Base::func();
	s.Base::func(100);
	
	//ͨ����������
	cout<< Son::m_A  <<endl;
	cout<< Base::m_A <<endl;
	Son::func();
	Son::func(10);
	Base::func();
	Base::func(10);
}
int main()
{
	test_1();
	return 0;
}
#endif
