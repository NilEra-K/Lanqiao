/************************************************
	��������:
	��ģ���г�Ա��������ʱ�� 
	
	��ģ���г�Ա��������ͨ���г�Ա��������ʱ��
	��������� 
	1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ��� 
	2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���  
************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

class Person1{
public:
	void showPerson1()
	{
		cout<<"Person1 Show"<<endl;
	 } 
}; 
class Person2{
public:
	void showPerson2()
	{
		cout<<"Person2 Show"<<endl;
	 } 
}; 
template<class T>
class MyClass{
public:
	T obj;
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}
}; 
void test_1()
{
	MyClass<Person1> m;
	m.fun1();
	m.fun2();
}
int main()
{
	test_1();
	return 0;
} 
#endif
