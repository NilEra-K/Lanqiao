/*****************************
	Day3_2.�����Ķ���
	�����Ķ���һ����5������:
	1.����ֵ���� 
	2.������ 
	3.�����б� 
	4.��������� 
	5.Return ���ʽ
	
	Fuction������,����
	������ⶼ����
	
	ģ�壺
	����ֵ���� ������ (�����б�) 
	{
		���������;
		return ���ʽ;
	}
*****************************/
#if 0
#include<bits/stdc++.h>
#include"FuctionTest.h"
using namespace std;
//ʵ��,�ó���������֮��
int add(int num_1,int num_2){	//�β� 
	int sum=num_1 + num_2;
	return sum;	
} 
//ʵ��,���ݽ���
void swap(int num_1,int num_2){
	cout<<"����ǰ:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
	int t;
	t=num_1;
	num_1=num_2;
	num_2=t;
	cout<<"������:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
}
int main()
{
	//ʹ��
	int a =10;
	int b =20;
	int c =add(a,b); 
	cout<< c;
	swap(a,b);
	cout<<endl;
	cout<< a <<' '<< b;
	//ֵ���� 
	//��νֵ����,����βη����ı�,������Ӱ��ʵ��
	//������� ��ֻ��num_1 �� num_2 �ں������ڷ����˽���
	//��ʵ a�� b��û�з����κεı仯
	return 0;
}
#endif

#if 0
/*****************************
	������������ʽ:
	1.�޲��޷� 
	2.�в��޷� 
	3.�޲��з� 
	4.�в��з� 
*****************************/
#include<bits/stdc++.h>
using namespace std;
//1.�޲��޷�
void test01()
{
	
}
//2.�в��޷�
void test02(int a)
{
	
}
//3.�޲��з� 
int test03()
{
	return 10;
}
//4.�в��з�
int test04(int a,int b)
{
	int sum =a+b;
	return sum;
}
int main()
{
	
	return 0;
}
#endif

#if 0
/*****************************
	���������������ж��
	�����Ķ���ֻ����һ��
	---------------------
	������������ʲô�ã�
	���Խ��к����ķ��ļ���д 
*****************************/
#include<bits/stdc++.h>
#include"FuctionTest.h"
using namespace std;
//�����Ķ��� 
int max(int a,int b)
{
	return a>b?a:b;
}
//����������
int max(int a,int b);
int max(int a,int b);
int max(int a,int b);

int main()
{
	int a=100;
	int b=200;
	cout<< max(a,b)<<endl;
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
//ʵ�������ж�
bool isPrime(int x)
{
	int i=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			break;
		}
	}	
	if(x==i){
		return true;
	}else{
		return false;
	}
} 
int main()
{
	
	return 0;
}
#endif
 
