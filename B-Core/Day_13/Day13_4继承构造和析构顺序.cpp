/******************************
	��������: 
	�̳й��������˳�� 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	Base()
	{
		cout<<"BASE�Ĺ��캯���ĵ���"<<endl; 
	}
	~Base()
	{
		cout<<"BASE�����������ĵ���"<<endl; 
	} 
}; 
//�����̳� 
class Son:public Base{
public:
	Son()
	{
		cout<<"Son�Ĺ��캯���ĵ���"<<endl; 
	}
	~Son()
	{
		cout<<"Son�����������ĵ���"<<endl; 
	} 
	/*-�̳���,�ȵ��ø���Ĺ��캯��,�ٵ�������Ĺ��캯��,����˳���빹��˳���෴-*/
};
void test_1()
{
	Son s;
	/*������* 
	BASE�Ĺ��캯���ĵ��� 
	Son�Ĺ��캯���ĵ��� 
	Son�����������ĵ��� 
	BASE�����������ĵ��� 
	*/
	
}
int main()
{
	test_1();
	return 0;
}
#endif
