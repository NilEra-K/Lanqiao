/*****************************************************
	本节内容:
	内建函数对象
	概念:STL内建了一些函数对象 
	分类:算数仿函数,关系仿函数,逻辑仿函数 
	
	用法:
	这些仿函数所产生的对象,用法和一般函数 
	完全相同 
	使用内建函数对象,需要引入头文件
	#include<functional>

	1.算数仿函数 实现四则运算 
	template<class T>  T plus<T>		//加法仿函数 
	template<class T>  T minus<T>		//减法仿函数 
	template<class T>  T multiplies<T>	//乘法仿函数 
	template<class T>  T divides<T>		//除法仿函数 
	template<class T>  T modulus<T>		//取模仿函数 
	template<class T>  T negate<T>		//取反仿函数 
	其中negate是一元运算,其他都是二元运算 
	 
	2.关系仿函数 实现关系对比
	template<class T>  bool equal_to<T>		//等于  
	template<class T>  bool not_equal_to<T>	//不等于  
	template<class T>  bool greater<T>		//大于 
	template<class T>  bool greater_equal<T>//大于等于 
	template<class T>  bool less<T>			//小于 
	template<class T>  bool less_equal<T>	//小于等于 
	关系仿函数中最常用的就是greater<>大于 
	
	3.逻辑仿函数 实现逻辑运算  
	template<class T>  bool logical_and<T>	//大于等于 
	template<class T>  bool logical_or<T>	//大于等于 
	template<class T>  bool logical_not<T>	//大于等于 
	 
*****************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//1.算数仿函数 实现四则运算 
void test_1()
{
	negate<int> n;
	cout<<n(50)<<endl; 
} 
void test_2()
{
	plus<int> p;
	cout<<p(10,20)<<endl;
} 
//2.关系仿函数 实现关系对比
class MyCompare{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};
void test_3()
{
	//自己实现仿函数 
	sort(v.begin(),v.end(),MyCompare());
	//STL内建仿函数 大于仿函数  
	sort(v.begin(),v.end(),greater<int>());
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif 
