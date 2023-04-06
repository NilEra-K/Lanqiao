/************************************
	本节内容:
	模板 
	C++另一种编程思想称为泛型编程 
	主要利用的技术就是模板 
	*C++提供两种模板机制:
	*函数模板和类模板 
	
	函数模板作用:
	建立一个通用函数,其函数返回值 
	类型和形参类型可以不具体制定, 
	用一个*虚拟的类型*来代表 
	
	函数模板的语法:
	template<typename T> 
	template---声明创建模板 
	typename---表明其后是一种数据类型 
	T---通用的数据类型,名称可以替换  
	
	模板的目的是为了提高函数的复用性,
	将类型参数化  
************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//交换整形函数  
void swapInt(int &a,int&b)
{
	int temp=a;
	a=b;
	b=temp;
}
//交换浮点型函数 
void swapDouble(double &a,double&b)
{
	double temp=a;
	a=b;
	b=temp;
}

//利用模板提供通用交换函数 
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
	
	//利用模板实现交换 
	//1.自动类型推导 --> *注意:需要推导出一致的数据类型 
	mySwap(a,b);
	cout<<"a="<<a <<endl;
	cout<<"b="<<b <<endl;
/*--------------------------*/
	//2.显式指定类型 
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
