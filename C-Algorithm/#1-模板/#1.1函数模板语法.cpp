/************************************
	��������:
	ģ�� 
	C++��һ�ֱ��˼���Ϊ���ͱ�� 
	��Ҫ���õļ�������ģ�� 
	*C++�ṩ����ģ�����:
	*����ģ�����ģ�� 
	
	����ģ������:
	����һ��ͨ�ú���,�亯������ֵ 
	���ͺ��β����Ϳ��Բ������ƶ�, 
	��һ��*���������*������ 
	
	����ģ����﷨:
	template<typename T> 
	template---��������ģ�� 
	typename---���������һ���������� 
	T---ͨ�õ���������,���ƿ����滻  
	
	ģ���Ŀ����Ϊ����ߺ����ĸ�����,
	�����Ͳ�����  
************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//�������κ���  
void swapInt(int &a,int&b)
{
	int temp=a;
	a=b;
	b=temp;
}
//���������ͺ��� 
void swapDouble(double &a,double&b)
{
	double temp=a;
	a=b;
	b=temp;
}

//����ģ���ṩͨ�ý������� 
template<typename T>
void mySwap(T& a,T& b)
{
	T temp=a;
	a=b;
	b=temp;
} 
void test_1()
{
	int a=10;
	int b=20;
	//swapInt(a,b);
	
	//����ģ��ʵ�ֽ��� 
	//1.�Զ������Ƶ� --> *ע��:��Ҫ�Ƶ���һ�µ��������� 
	mySwap(a,b);
	cout<<"a="<<a <<endl;
	cout<<"b="<<b <<endl;
/*--------------------------*/
	//2.��ʽָ������ 
	mySwap<int>(a,b); 
	cout<<"a="<<a <<endl;
	cout<<"b="<<b <<endl;
	
}
int main()
{
	test_1(); 
	return 0;
}
#endif
