/******************************
	本节知识:
	运算符的重载:
	对已有的运算符进行重新定义
	赋予另一种功能
	以适应不同的数据类型 
	-=-=-=-=-=-=-=-=-=-=-=-=-=-
	加法运算符的重载:
	作用:实现两个自定义数据类型相加的运算
	*注意:
	1.对于内置的数据类型的表达式的运算符是不可能改变的 
	2.不要滥用运算符重载 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	Person()
	{
		
	}
	Person(int a,int b)
	{
		m_A=a;
		m_B=b;
	}
	//用成员函数去实现的 人加人操作 
	Person PersonAddPerson(Person& p)
	{
		Person temp;
		//临时的 m_A 等于 this的 m_A + p的 m_B 
		temp.m_A=this->m_A + p.m_B;
		temp.m_B=this->m_B + p.m_B;
		return temp;
	}
	//编译器对于加号运算,给你起的函数名字是:operator+ 
	Person operator+(Person& p)
	{
		Person temp;
		//临时的 m_A 等于 this的 m_A + p的 m_B 
		temp.m_A=this->m_A + p.m_B;
		temp.m_B=this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};
int main()
{
	//对于内置的数据类型,编译器是知道如何去进行运算的 
	int a =10;
	int b =20;
	cout<< a+b <<endl;
	
	Person p1(1,5);
	Person p2(10,20);
	Person p3 = p1 + p2;//编译器不知道怎么加 
	cout<<p3.m_A<<endl<<p3.m_B<<endl;
	return 0;
}
#endif
