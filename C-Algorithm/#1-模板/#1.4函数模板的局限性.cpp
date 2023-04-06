/**********************
	本节内容:
	模板的局限性 
**********************/
#if 1
#include<bits/stdc++.h>
using namespace std;

template<class T>
void f_1(T a,T b)
{ 
	a=b;
}
//在上述代码中提供的赋值操作,如果传入的a和b是一个数组,就无法实现了 
template<class T>
void f_2(T a,T b)
{
	if(a>b){
		/**/
	}
 } 
//在上述代码中,如果T的数据类型是像Person这样的自定义数据类型,也无法正常使用  
//为了解决以上问题,提供了模板的重载 
//可以为这些特定的类型提供具体化的模板  

class Person{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};
//普通函数模板  
template<class T>
bool myCompare(T& a,T&b)
{
	if(a==b){
		return true;
	}else{
		return false;
	}
	
}
//具体化,显式具体化 
//具体化是优先于函数模板的  
template<>
bool myCompare(Person& p1,Person& p2)
{
	if(p1.m_Name==p2.m_Name&&p1.m_Age==p2.m_Age){
		return true;
	}else{
		return false;
	}
}
void test_1()
{
	int a=10;
	int b=20;
	
	//内置数据类型可以直接使用通用的函数模板  
	bool ret=myCompare(a,b);
	if(ret){
		cout<<"相等"<<endl;
	}else{
		cout<<"不相等"<<endl;
	}
}
void test_2()
{
	Person p1("张三",18);
	Person p2("李四",20);
	//自定义数据类型不会调用不会调用普通的函数模板 
	//可以创建具体化的Person数据类型的模板,用于特殊处理这个类型  
	bool ret=myCompare(p1,p2);
	if(ret){
		cout<<"相等"<<endl;
	}else{
		cout<<"不相等"<<endl;
	}	
}
int main()
{
	test_1();
	test_2(); 
	return 0;
}
#endif
