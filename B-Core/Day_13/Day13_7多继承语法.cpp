/****************************************************
	��������:
	��̳��﷨
	�﷨: 
	class ���� : �̳з�ʽ ����1,�̳з�ʽ ����2...
	��̳п��ܻ�������������ͬ����Ա�ĳ��� 	
	��Ҫ������������ 
	C++ʵ�ʿ����в�����ʹ�ö�̳�  
	***�ܽ�:��̳���������������ͬ�����.
	����ʹ��ʱҪ�������� 
****************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base1{
public:
	Base1()
	{
		m_A=100;
	}
	int m_A;
};
class Base2{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
class Son:public Base1,public Base2{
public:
	Son()
	{
		m_C=300;
		m_D=400;
	}
	int m_C;
	int m_D;
};
void test_1()
{
	Son s;
	cout<<"Size Of Son :"<<sizeof(s)<<endl;
	cout<<s.Base1::m_A <<endl;
	cout<<s.Base2::m_A <<endl;
}
int main()
{
	test_1();
	return 0;
} 
#endif

