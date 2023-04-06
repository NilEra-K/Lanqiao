/************************
	本节内容 : 
	内存分区模型 
************************/
#if 0
/*程序运行前*/
#include<bits/stdc++.h>
using namespace std;
//全局变量
int g_a=10;
int g_b=20; 
//全局常量
const int c_g_a=10;
const int c_g_b=20; 
int main()
{
	//局部变量
	int a=10;
	int b=20;
	//静态变量
	static int s_a=10;
	static int s_b=20; 
	//局部常量
	const int c_l_a=10;
	const int c_l_b=20;
	//打印地址
	cout<< "局部变量a地址为 : " << &a <<endl;
	cout<< "局部变量b地址为 : " << &b <<endl;
	
	cout<< "全局变量a地址为 : " << &g_a <<endl;
	cout<< "全局变量b地址为 : " << &g_b <<endl;
	
	cout<< "静态变量a地址为 : " << &s_a <<endl;
	cout<< "静态变量b地址为 : " << &s_b <<endl;
	
	cout<< "全局常量a地址为 : " << &c_g_a <<endl;
	cout<< "全局常量b地址为 : " << &c_g_b <<endl;
	
	cout<< "字符串常量地址为 : " << &"Hello" <<endl;
	cout<< "字符串常量地址为 : " << &"World" <<endl;
	
	cout<< "局部常量a地址为 : " << &c_l_a <<endl;
	cout<< "局部常量b地址为 : " << &c_l_b <<endl;
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
	//两次结果不一致
	//因为其存在于栈区 
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
	//C++常用内存才做函数 
	/*
	memset()
	memcpy()
	memmove()
	*/
	return 0; 
} 
#endif
