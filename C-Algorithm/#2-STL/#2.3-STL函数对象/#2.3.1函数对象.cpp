/***********************************************
	��������:
	�������� 
	���غ������ò���������,����󳣳�Ϊ��������
	��������ʹ�����ص�()ʱ,��Ϊ���ƺ������� 
	Ҳ�зº��� 
	
	����:
	��������(�º���)��һ����,����һ������ 
	
	�ص�:
	1.����������ʹ��ʱ,��������ͨ������������,�� 
	���в���,�����з���ֵ  
	2.�������󳬳���ͨ�����ĸ���,��������������� 
	����״̬  
	3.�������������Ϊ��������  
***********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//1.����������ʹ��ʱ,��������ͨ������������,�����в���,�����з���ֵ  
class MyAdd{
public:
	int operator()(int v1,int v2)
	{
		return v1+v2;
	}
};
void test_1()
{
	MyAdd myAdd;
	cout<<myAdd(10,10)<<endl;
}
//2.�������󳬳���ͨ�����ĸ���,��������������Լ���״̬  
class MyPrint{
public:
	MyPrint()
	{
		count=0;
	}
	int operator()(string test)
	{
		cout<<test<<endl;
		count++;//ͳ��ʹ�ô��� 
	}
	
	int count;
};
void test_2()
{
	MyPrint myPrint;
	myPrint("Hello World!");
	myPrint("Hello World!");
	myPrint("Hello World!");
	myPrint("Hello World!");
	cout<<"myPrint���ô����� : "<<myPrint.count<<endl;
}
//3.�������������Ϊ��������  
void doPrint(MyPrint& mp,string str)
{
	mp(str);
}
void test_3()
{
	MyPrint myPrint;
	doPrint(myPrint,"Hello C++");
}
int main()
{
	test_1();
	test_2();
	test_3();
	return 0;
}
#endif
