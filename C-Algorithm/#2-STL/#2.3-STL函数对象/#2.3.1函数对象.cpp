/***********************************************
	本节内容:
	函数对象 
	重载函数调用操作符的类,其对象常称为函数对象
	函数对象使用重载的()时,行为类似函数调用 
	也叫仿函数 
	
	本质:
	函数对象(仿函数)是一个类,不是一个函数 
	
	特点:
	1.函数对象在使用时,可以像普通函数那样调用,可 
	以有参数,可以有返回值  
	2.函数对象超出普通函数的概念,函数对象可以有自 
	己的状态  
	3.函数对象可以作为参数传递  
***********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//1.函数对象在使用时,可以像普通函数那样调用,可以有参数,可以有返回值  
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
//2.函数对象超出普通函数的概念,函数对象可以有自己的状态  
class MyPrint{
public:
	MyPrint()
	{
		count=0;
	}
	int operator()(string test)
	{
		cout<<test<<endl;
		count++;//统计使用次数 
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
	cout<<"myPrint调用次数是 : "<<myPrint.count<<endl;
}
//3.函数对象可以作为参数传递  
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
