/*******************************************
	��������:�������
	��C++��,�������β��б��ǿ���
	��Ĭ��ֵ�ġ�
	�﷨: ����ֵ���� ������(����=Ĭ��ֵ){} 
*******************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//����ֵ���� ������ (����=Ĭ��ֵ){}
int func_1(int a,int b=10,int c=10){
	return a+b+c;
}
//1.���ĳ��λ�ò�����Ĭ��ֵ,��ô���λ�ú󶼱�����Ĭ��ֵ
//��������
//2.�����������������Ĭ��ֵ,��ô����ʵ�ֵ�ʱ������Ĭ��ֵ 
int func_2(int a,int b=10);//���� 
int func_2(int a,int b/*�˴�������Ĭ��ֵ*/){
}
int main()
{
	cout<<func_1(100)<<endl;
	cout<<func_1(10,20,30)<<endl; 
	return 0;
}
#endif

#if 0
/*����ռλ����*/
/*C++�к������β��б��п�����ռλ������������ռλ*/
/*���ú���ʱ�������λ��*/
/*�﷨ : ����ֵ���� ������ (��������){	} */
/*���ֽ׶κ���ռλ�����������岻��,���Ǻ���γ��л��õ��ü���*/
#include<bits/stdc++.h>
using namespace std;
//����ֵ���� ������(��������){} 
void func(int a,/* int */)
{
	
}
int main()
{
	func(10,/* 10 */);
	return 0;
}
#endif

#if 0
/*��������*/
#include<bits/stdc++.h>
using namespace std;
void func()
{
	cout<<"void func()�ĵ���"<<endl;
}
void func(int a)
{
	cout<<"void func(int a)�ĵ���"<<endl;
}
void func(double a)
{
	cout<<"void func(double a)�ĵ���"<<endl;
}
void func(int a,double b)
{
	cout<<"void func(int a,double b)�ĵ���"<<endl;
}
void func(double a,int b)
{
	cout<<"void func(double a,int b)�ĵ���"<<endl;
}
//�����ķ���ֵ��������Ϊ�������ص����� 
/*
int void func(double a,double b)
{
	cout<<"void func(double a,double b)�ĵ���"<<endl;
}
*/
int main()
{
	func();
	func(10);
	func(3.14);
	func(10,3.14);
	func(3.14,10);
	return 0;
}
#endif

#if 1
/*��������ע������*/
#include<bits/stdc++.h>
using namespace std;
//1.������Ϊ��������
void func(int& a)
{
	cout<<"void func(int& a)�ĵ���"<<endl;
}
void func(const int& a)
{
	cout<<"void func(const int& a)�ĵ���"<<endl;
}
//2.����������������˺���Ĭ�ϲ���
//[ERROR]����Ĭ�ϲ����������� 
void func_2(int a,int b=10)
{
	cout<<"void func_2(int a,int b=10)�ĵ���"<<endl;
}
void func_2(int a)
{
	cout<<"void func_2(int a)�ĵ���"<<endl;
}
int main()
{
	int a=10;
	func(a);
	const int b=20;
	func(b);
	
	//func_2(10);//ERROR 
	return 0;
}
#endif
