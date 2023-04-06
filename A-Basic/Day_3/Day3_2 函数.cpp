/*****************************
	Day3_2.函数的定义
	函数的定义一般有5个步骤:
	1.返回值类型 
	2.函数名 
	3.参数列表 
	4.函数体语句 
	5.Return 表达式
	
	Fuction：功能,函数
	两个理解都可以
	
	模板：
	返回值类型 函数名 (参数列表) 
	{
		函数体语句;
		return 表达式;
	}
*****************************/
#if 0
#include<bits/stdc++.h>
#include"FuctionTest.h"
using namespace std;
//实现,得出两个数字之和
int add(int num_1,int num_2){	//形参 
	int sum=num_1 + num_2;
	return sum;	
} 
//实现,数据交换
void swap(int num_1,int num_2){
	cout<<"交换前:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
	int t;
	t=num_1;
	num_1=num_2;
	num_2=t;
	cout<<"交换后:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
}
int main()
{
	//使用
	int a =10;
	int b =20;
	int c =add(a,b); 
	cout<< c;
	swap(a,b);
	cout<<endl;
	cout<< a <<' '<< b;
	//值传递 
	//所谓值传递,如果形参发生改变,并不会影响实参
	//比如此题 ：只是num_1 和 num_2 在函数体内发生了交换
	//其实 a和 b并没有发生任何的变化
	return 0;
}
#endif

#if 0
/*****************************
	函数的四种形式:
	1.无参无返 
	2.有参无返 
	3.无参有返 
	4.有参有返 
*****************************/
#include<bits/stdc++.h>
using namespace std;
//1.无参无返
void test01()
{
	
}
//2.有参无返
void test02(int a)
{
	
}
//3.无参有返 
int test03()
{
	return 10;
}
//4.有参有返
int test04(int a,int b)
{
	int sum =a+b;
	return sum;
}
int main()
{
	
	return 0;
}
#endif

#if 0
/*****************************
	函数的声明可以有多次
	函数的定义只能有一次
	---------------------
	函数的声明有什么用？
	可以进行函数的分文件编写 
*****************************/
#include<bits/stdc++.h>
#include"FuctionTest.h"
using namespace std;
//函数的定义 
int max(int a,int b)
{
	return a>b?a:b;
}
//函数的声明
int max(int a,int b);
int max(int a,int b);
int max(int a,int b);

int main()
{
	int a=100;
	int b=200;
	cout<< max(a,b)<<endl;
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
//实现素数判断
bool isPrime(int x)
{
	int i=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			break;
		}
	}	
	if(x==i){
		return true;
	}else{
		return false;
	}
} 
int main()
{
	
	return 0;
}
#endif
 
