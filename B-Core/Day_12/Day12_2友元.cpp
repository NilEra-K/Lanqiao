/********************************************************
	本节知识:
	-友元-

	打个比方:
	你家有客厅(Public),有你的卧室(Private) 
	客厅是所有的人都能进去,但是你的卧室是私有的,所以理论 
	上只能你自己进去
	但是,你也可以允许你的好基友和好闺蜜进去
	在程序里,有些私有属性也想让一些函数或者类进行访问,就 
	需要用到-友元-技术 
	-友元-的目的是让一个函数或者类访问另一个类中私有成员
	-友元-的关键字 -friend- 
	
	友元的三种实现:
	1.全局函数做友元
	2.类做友元
	3.成员函数做友元 注意:成员函数需要在类外实现 
********************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class goodGayClass;//声明类 
class Building{
//告诉编译器,goodGay全局函数,是Builiding类的好朋友,可以访问私有类中的内容
	friend void goodGay(Building* building); 
//告诉编译器,goodGayClass类,是Builiding类的好朋友,可以访问私有类中的内容
	friend class goodGayClass;
//告诉编译器,goodGayClass类里的visit_2(),是Builiding类的好朋友,可以访问私有类中的内容
	friend void goodGayClass::visit_2();
public:
	string m_SittingRoom;
	Building()
	{
		m_SittingRoom="客厅";
		m_Bedroom="卧室";
	}
private:
	string m_Bedroom;
};

class goodGayClass{
public:
	goodGayClass()
	{
		building=new Building;
	}
	~goodGayClass()
	{
		delete building;
	}
	void visit()
	{
		cout<<"好基友正在访问 : "<<building->m_SittingRoom<<endl;
		cout<<"好基友正在访问 : "<<building->m_Bedroom<<endl;
	}
	void visit_2()
	{
		cout<<"好基友正在访问 : "<<building->m_SittingRoom<<endl;
		cout<<"好基友正在访问 : "<<building->m_Bedroom<<endl;
	}
	
	Building* building;
};
void goodGay(Building* building)
{
	cout<<"好基友正在访问 : "<<building->m_SittingRoom<<endl;
	cout<<"好基友正在访问 : "<<building->m_Bedroom<<endl;	 
}
void test_1()
{
	Building b;
	goodGay(&b);
	goodGayClass g;
	g.visit();
}
int main()
{
	test_1();	
	return 0;
}
#endif
