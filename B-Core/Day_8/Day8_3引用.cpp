/************************
	�������� :  
	���úͺ������  
************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//���õĻ���ʹ�� : �����������
	//�﷨ : �������� &����=ԭ��
	int a=10;
	int& b=a;
	 
	cout<<a<<endl;
	cout<<b<<endl;
	b=100;
	cout<<a<<endl;
	cout<<b<<endl; 
	//ע��* ���ñ����ʼ�� ����ȷҪ��˭�����
	//		�����ڳ�ʼ���󲻿��Ըı�
	return 0;
}
#endif

#if 0
//��������������
//���� : ��������ʱ,�����������õļ������β�����ʵ��
//�ŵ� : ���Լ�ָ���޸�ʵ�� 
#include<bits/stdc++.h>
using namespace std;
//1.ֵ���� 
void mySwap01(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
//2.��ַ���� 
void mySwap02(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
//3.���ô���
//�ܽ� : ͨ�����ò���������Ч��ͬ����ַ������һ����
//���õ��﷨������� 
void mySwap03(int& a,int& b)//int&a =a,int&b =b
{
	int temp;
	temp=a;
	a=b;
	b=temp;
 } 
int main()
{
	int a=10;
	int b=20;
	
	//mySwap01(a,b);
	//cout<<a<<' '<<b <<endl;
	
	//mySwap02(&a,&b);
	//cout<<a<<' '<<b <<endl;
	
	mySwap03(a,b); 
	cout<<a<<' '<<b <<endl;
	
	return 0;
}
#endif

#if 0
/********************************************
	�����������ķ���ֵ
	���� : �����ǿ�����Ϊ�����ķ���ֵ���ڵ� 
	ע�� : ��Ҫ���ؾֲ��������� 
	�÷� : ����������Ϊ��ֵ 
********************************************/
#include<bits/stdc++.h>
using namespace std;

//���ؾֲ���������
int& test01()
{
	int a=10;
	return a;
}
//���ؾ�̬��������
int& test02()
{
	static int b=20;
	return b;
} 
int main()
{
	//���ܷ��ؾֲ����������� 
	int& ref=test01();
	cout<<ref<<endl;
	cout<<ref<<endl;
	
	int& ref_2=test02();
	cout<<ref_2<<endl;
	cout<<ref_2<<endl;
	
	//��������ֵ
	//�����������ֵ,��ô���뷵��Ӧ�� 
	test02()=1000;
	cout<<ref_2<<endl; 
	return 0;
}
#endif 

//ͨ�����ϰ���,���ǿ���֪�����õı���
//���õı�����ʵ����C++�ڲ�ʵ��һ��ָ�볣��
#if 0
#include<bits/stdc++.h>
using namespace std;
//������Ϊ���� 
//����������,ת��Ϊint* const ref =&a; 
void func(int& ref)
{
	ref=100;//����ref������,�Զ�ת��Ϊ *ref=100; 
}
int main()
{
	int a=10;
	
	//�Զ�ת��Ϊint* const ref =&a;
	//ָ�볣������ָ���ָ���ܸ���
	//Ҳ��˵�������ò����Ը���  
	int& ref=a;
	
	ref=20;//�ڲ�����ref������
	//�Զ�������ת��Ϊ*ref =20; 
	return 0;
}
#endif

#if 1
//�������� 
#include<bits/stdc++.h>
using namespace std;
void showValue(const int& a)//const int* const a =&_ 
{
	//a+=10;//[ERROR]�����޸� 
	cout<< a<<endl;	
}
int main()
{
	int a=10;
	showValue(a);
	//int& ref=10;//���ñ�����Ҫһ���Ϸ����ڴ�ռ� ,���ERROR
	const int& ref=10;
	//����const,�������Ż��˴���:
	//int temp=10;
	//const int& ref=temp; 
	return 0;
}
#endif
