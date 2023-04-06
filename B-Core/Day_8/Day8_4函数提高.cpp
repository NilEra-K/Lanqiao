/*******************************************
	本节内容:函数提高
	在C++中,函数的形参列表是可以
	有默认值的。
	语法: 返回值类型 函数名(参数=默认值){} 
*******************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//返回值类型 函数名 (参数=默认值){}
int func_1(int a,int b=10,int c=10){
	return a+b+c;
}
//1.如果某个位置参数有默认值,那么这个位置后都必须有默认值
//避免歧义
//2.如果函数参数声明有默认值,那么函数实现的时候不能有默认值 
int func_2(int a,int b=10);//声明 
int func_2(int a,int b/*此处不能有默认值*/){
}
int main()
{
	cout<<func_1(100)<<endl;
	cout<<func_1(10,20,30)<<endl; 
	return 0;
}
#endif

#if 0
/*函数占位参数*/
/*C++中函数的形参列表中可以有占位参数，用来做占位*/
/*调用函数时必须填补该位置*/
/*语法 : 返回值类型 函数名 (数据类型){	} */
/*在现阶段函数占位参数存在意义不大,但是后面课程中会用到该技术*/
#include<bits/stdc++.h>
using namespace std;
//返回值类型 函数名(数据类型){} 
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
/*函数重载*/
#include<bits/stdc++.h>
using namespace std;
void func()
{
	cout<<"void func()的调用"<<endl;
}
void func(int a)
{
	cout<<"void func(int a)的调用"<<endl;
}
void func(double a)
{
	cout<<"void func(double a)的调用"<<endl;
}
void func(int a,double b)
{
	cout<<"void func(int a,double b)的调用"<<endl;
}
void func(double a,int b)
{
	cout<<"void func(double a,int b)的调用"<<endl;
}
//函数的返回值不可以作为函数重载的条件 
/*
int void func(double a,double b)
{
	cout<<"void func(double a,double b)的调用"<<endl;
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
/*函数重载注意事项*/
#include<bits/stdc++.h>
using namespace std;
//1.引用作为重载条件
void func(int& a)
{
	cout<<"void func(int& a)的调用"<<endl;
}
void func(const int& a)
{
	cout<<"void func(const int& a)的调用"<<endl;
}
//2.函数重载如果碰到了函数默认参数
//[ERROR]碰到默认参数产生歧义 
void func_2(int a,int b=10)
{
	cout<<"void func_2(int a,int b=10)的调用"<<endl;
}
void func_2(int a)
{
	cout<<"void func_2(int a)的调用"<<endl;
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
