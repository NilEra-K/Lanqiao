/*****************************
	��������:
	�̳з�ʽ
	�̳еķ�ʽ������:
	1.�����̳� 
	2.�����̳� 
	3.˽�м̳� 
	
	�������Ǵ�ʱ���¼̳е��﷨:
	class ���� : �̳з�ʽ ���� 
	 
*****************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
class base1{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son1:public base1{
public:
	void func()
	{
		a=10;		//�����еĹ���Ȩ�޳�Ա,����������Ȼ�ǹ���Ȩ�� 
		b=10;		//�����е�Ȩ�ޱ�����Ա,����������Ȼ�Ǳ���Ȩ�� 
		//c=10;		//�����е�˽��Ȩ�޳�Ա,������ʲ���  
	}
};
void test_1()
{
	son1 s1;
	s1.a=100;	//����ֻ�ܷ��ʵ�����Ȩ�� 
	//s1.b=100;	//son1�� b�Ǳ���Ȩ��,������ʲ��� 
	//s1.b=100;
}
/*--------------------------------------------------------------------------------*/
//�����̳� 
class base2{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son2:protected base2{
public:
	void func()
	{
		a=10;		//�����еĹ���Ȩ�޳�Ա,����������Ȼ�ǹ���Ȩ�� 
		b=10;		//�����еı���Ȩ�޳�Ա,����������Ȼ�Ǳ���Ȩ�� 
		//c=10;		//�����е�˽��Ȩ�޳�Ա,������ʲ���  
	}
}; 
void test_2()
{
	son2 s2;
	//s2.a=100;	//s2��a��Ϊ����Ȩ��,������ʲ��� 
	//s2.b=100;	//s2��bΪ����Ȩ��,������ʲ��� 
	//s2.c=100; //s2��cΪ˽��Ȩ��,������ʲ��� 
}
/*--------------------------------------------------------------------------------*/
//˽�м̳� 
class base3{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son3:private base3{
public:
	void func()
	{
		a=10;		//�����еĹ���Ȩ�޳�Ա,��Ȼ���Է��� 
		b=10;		//�����еı���Ȩ�޳�Ա,��Ȼ���Է��� 
		//c=10;		//�����е�˽��Ȩ�޳�Ա,������ʲ���  
	}
}; 
void test_3()
{
	son3 s3;
	//s3.a=100;	//s3��a��Ϊ����Ȩ��,��������˽��Ȩ�� 
	//s3.b=100;	//s3��bΪ����Ȩ��,��������˽��Ȩ�� 
	//s3.c=100; //s3��cΪ˽��Ȩ��,������ʲ��� 
} 
int main()
{
	
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*�ܽ�*/
class A{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
/*==================================*/
/*���м̳�*/
class B:public A{
public:
	int a;
protected:
	int b;
//���ɷ���
	int c;	
};
/*==================================*/
/*�����̳�*/
class B:protected A{
protected:
	int a;
	int b;
//���ɷ���
	int c;	
};
/*==================================*/
/*˽�м̳�*/
class B:public A{
private:
	int a;
	int b;
//���ɷ���
	int c;	
};
