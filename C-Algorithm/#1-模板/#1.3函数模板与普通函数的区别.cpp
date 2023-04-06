/*********************************
	本节内容:
	函数模板与普通函数的区别  
*********************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//普通函数--调用时可以发生自动类型转换(隐式类型转换) 
int myAdd_1(int a,int b)
{
	return a+b;
}
//模板函数--如果利用自动类型推导,不会发生隐式类型转换 
//如果利用显式指定类型的方式,可以发生隐式类型转换 
template<class T> 
T myAdd_2(T a,T b)
{
	return a+b;
} 
void test_1()
{
	int a=10;
	int b=20;
	char c='c';//c的ASCII码为99 
	cout<<myAdd_1(a,c)<<endl;//正确,将char类型的'c'隐式转换为int类型 
	//myAdd_2(a,c);//ERROR 
	cout<<myAdd_2<int>(a,c)<<endl;
	//正确,如果利用显示指定类型的方式
	//可以发生隐式类型转换 
} 

int main()
{
	test_1();
	return 0;
}
#endif

#if 1
/*********************************
	函数模板与普通函数的调用规则: 
	1.如果函数模板和普通函数都可 
	以实现,优先调用普通函数 
	
	2.可以通过空模板参数列表来强 
	制调用函数模板 
	
	3.函数模板也可以发生重载 
	
	4.如果函数模板可以产生更好的 
	匹配,优先调用函数模板  
*********************************/
#include<bits/stdc++.h>
using namespace std;

void myPrint(int a,int b)
{
	cout<<"调用了普通函数"<<endl;
} 
template<class T>
void myPrint(T a,T b)
{
	cout<<"调用的模板函数"<<endl;
}
template<class T>
void myPrint(T a,T b,T c)
{
	cout<<"调用的重载函数模板"<<endl;
}
void test_1()
{
	//1.如果函数模板和普通函数都可以实现,优先调用普通函数 
	//*注意:如果告诉编译器,普通函数是有的,但只是声明没有实现 
	//或者不在当前文件内实现,就会报错找不到  
	int a=10;
	int b=20;
	myPrint(a,b);//调用普通函数 
	
	//2.可以通过空模板参数列表来强制调用函数模板 
	myPrint<>(a,b);//调用函数模板
	
	//3.函数模板也可以发生重载 
	int c=30;
	myPrint<>(a,b,c);
	
	//4.如果函数模板可以产生更好的匹配,优先调用函数模板 
	char c1='a';
	char c2='c';
	myPrint(c1,c2);
	
	//*总结:如果给出了函数模板,就最好不要给出普通函数
	//		否则会产生二义性(不过当然是可以解决的) 
}
int main()
{
	test_1();
	return 0;
}
#endif
