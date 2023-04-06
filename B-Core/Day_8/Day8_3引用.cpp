/************************
	本节内容 :  
	引用和函数提高  
************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//引用的基本使用 : 给变量起别名
	//语法 : 数据类型 &别名=原名
	int a=10;
	int& b=a;
	 
	cout<<a<<endl;
	cout<<b<<endl;
	b=100;
	cout<<a<<endl;
	cout<<b<<endl; 
	//注意* 引用必须初始化 即明确要给谁起别名
	//		引用在初始化后不可以改变
	return 0;
}
#endif

#if 0
//引用做函数参数
//作用 : 函数传参时,可以利用引用的技术让形参修饰实参
//优点 : 可以简化指针修改实参 
#include<bits/stdc++.h>
using namespace std;
//1.值传递 
void mySwap01(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
//2.地址传递 
void mySwap02(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
//3.引用传递
//总结 : 通过引用参数产生的效果同按地址传递是一样的
//引用的语法更清楚简单 
void mySwap03(int& a,int& b)//int&a =a,int&b =b
{
	int temp;
	temp=a;
	a=b;
	b=temp;
 } 
int main()
{
	int a=10;
	int b=20;
	
	//mySwap01(a,b);
	//cout<<a<<' '<<b <<endl;
	
	//mySwap02(&a,&b);
	//cout<<a<<' '<<b <<endl;
	
	mySwap03(a,b); 
	cout<<a<<' '<<b <<endl;
	
	return 0;
}
#endif

#if 0
/********************************************
	引用做函数的返回值
	作用 : 引用是可以作为函数的返回值存在的 
	注意 : 不要返回局部变量引用 
	用法 : 函数调用作为左值 
********************************************/
#include<bits/stdc++.h>
using namespace std;

//返回局部变量引用
int& test01()
{
	int a=10;
	return a;
}
//返回静态变量引用
int& test02()
{
	static int b=20;
	return b;
} 
int main()
{
	//不能返回局部变量的引用 
	int& ref=test01();
	cout<<ref<<endl;
	cout<<ref<<endl;
	
	int& ref_2=test02();
	cout<<ref_2<<endl;
	cout<<ref_2<<endl;
	
	//函数作左值
	//如果函数作左值,那么必须返回应用 
	test02()=1000;
	cout<<ref_2<<endl; 
	return 0;
}
#endif 

//通过以上案例,我们可以知道引用的本质
//引用的本质其实是在C++内部实现一个指针常量
#if 0
#include<bits/stdc++.h>
using namespace std;
//函数作为参数 
//发现是引用,转换为int* const ref =&a; 
void func(int& ref)
{
	ref=100;//发现ref是引用,自动转换为 *ref=100; 
}
int main()
{
	int a=10;
	
	//自动转化为int* const ref =&a;
	//指针常量，是指针的指向不能更改
	//也就说明了引用不可以更改  
	int& ref=a;
	
	ref=20;//内部发现ref是引用
	//自动帮我们转换为*ref =20; 
	return 0;
}
#endif

#if 1
//常量引用 
#include<bits/stdc++.h>
using namespace std;
void showValue(const int& a)//const int* const a =&_ 
{
	//a+=10;//[ERROR]不可修改 
	cout<< a<<endl;	
}
int main()
{
	int a=10;
	showValue(a);
	//int& ref=10;//引用本身需要一个合法的内存空间 ,因此ERROR
	const int& ref=10;
	//加入const,编译器优化了代码:
	//int temp=10;
	//const int& ref=temp; 
	return 0;
}
#endif
