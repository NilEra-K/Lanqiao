/************************
	�������� : 
	�ڴ����ģ�� 
************************/
#if 0
/*��������ǰ*/
#include<bits/stdc++.h>
using namespace std;
//ȫ�ֱ���
int g_a=10;
int g_b=20; 
//ȫ�ֳ���
const int c_g_a=10;
const int c_g_b=20; 
int main()
{
	//�ֲ�����
	int a=10;
	int b=20;
	//��̬����
	static int s_a=10;
	static int s_b=20; 
	//�ֲ�����
	const int c_l_a=10;
	const int c_l_b=20;
	//��ӡ��ַ
	cout<< "�ֲ�����a��ַΪ : " << &a <<endl;
	cout<< "�ֲ�����b��ַΪ : " << &b <<endl;
	
	cout<< "ȫ�ֱ���a��ַΪ : " << &g_a <<endl;
	cout<< "ȫ�ֱ���b��ַΪ : " << &g_b <<endl;
	
	cout<< "��̬����a��ַΪ : " << &s_a <<endl;
	cout<< "��̬����b��ַΪ : " << &s_b <<endl;
	
	cout<< "ȫ�ֳ���a��ַΪ : " << &c_g_a <<endl;
	cout<< "ȫ�ֳ���b��ַΪ : " << &c_g_b <<endl;
	
	cout<< "�ַ���������ַΪ : " << &"Hello" <<endl;
	cout<< "�ַ���������ַΪ : " << &"World" <<endl;
	
	cout<< "�ֲ�����a��ַΪ : " << &c_l_a <<endl;
	cout<< "�ֲ�����b��ַΪ : " << &c_l_b <<endl;
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int* func()
{
	int a=10;
	return &a;
}
int main()
{
	int* p=func();
	cout<< *p <<endl;
	cout<< *p <<endl;
	cout<< *p <<endl;
	//���ν����һ��
	//��Ϊ�������ջ�� 
	return 0;
} 
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int* func()
{
	int* a=new int(20);
	return a; 
}
int main()
{
	int* p=func();
	cout<<*p<<endl;
	
	delete p;
	
	cout<<*p<<endl;
	return 0;
} 
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//C++�����ڴ�������� 
	/*
	memset()
	memcpy()
	memmove()
	*/
	return 0; 
} 
#endif
