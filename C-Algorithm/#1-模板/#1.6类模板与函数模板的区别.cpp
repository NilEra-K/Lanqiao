/*********************************************
	本节内容:
	类模板与函数模板的区别:
	1.类模板没有自动类型推导的使用方式 
	2. 类模板在模板参数列表中可以有默认参数  
*********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class NameType,class AgeType = int>
class Person{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	void showPerson()
	{
		cout<<"Name: "<<this->m_Name<<endl<<"Age: "<<this->m_Age<<endl;
	}
	NameType m_Name;
	AgeType m_Age;
}; 

//1.类模板没有自动类型推导的使用方式 
void test_1()
{
	//Person p1("孙悟空",999);//ERROR,类模板使用的时候不可以使用自动推导类型 
	Person<string,int> p2("猪八戒",800);//必须使用显式指定类型的方式  
}

//2. 类模板在模板参数列表中可以有默认参数 
void test_2()
{
	Person<string> p3("沙僧",700);
	p3.showPerson();
}
int main()
{
	test_1();
	test_2();
	return 0;
} 
#endif
