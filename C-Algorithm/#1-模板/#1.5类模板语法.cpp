/************************************************

	本节内容:
	类模板语法 
	建立一个通用类类中的成员 数据类型可以不具体 
	指定,用一个虚拟的类型来代表 
	
	语法:
	template<typename T>
	template--声明创建模板
	typename--表明其后的符号是一种数据类型 
	T--通用的数据类型   
************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class NameType,class AgeType>
class Person{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	void showPerson()
	{
		cout<<"Name: "<<this->m_Name<<"Age: "<<this->m_Age<<endl;
	}
	NameType m_Name;
	AgeType m_Age;
}; 
void test_1()
{
	//指定NameType为string类型 AgeType为int类型 
	Person<string,int> p1("孙悟空",999);
	p1.showPerson();
}
int main()
{
	test_1();
	return 0;
} 
#endif
