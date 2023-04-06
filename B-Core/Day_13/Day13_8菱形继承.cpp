/************************************
	本节内容 :
	菱形(钻石)继承 
	两个派生类继承同一个基类 
	又有某个类同时继承着两个派生类 
	这种继承被称为菱形(钻石)继承 
	
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	举个例子:
	动物 
	--|-----羊 -----| 
	--|-----驼 -----|
					 |-----羊驼 
					即羊驼即有羊的特性
					又有驼的特性 
	呈现出如下形状 : 
		*
	*		*
		*	
		
	***总结
	当菱形继承,两个父亲拥有相同数据  
	需要加作用域来区分	
************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
	int m_Age;
}; 
class Sheep:virtual public Animal{
	
};
class Tuo:virtual public Animal{
	
};
class SheepTuo:public Sheep,public Tuo{
	
};

void test_1()
{
	//利用虚继承可以解决菱形继承的问题
	//只需要在继承前面加入 virtual 关键字即可
	
	//-vbptr-虚基类指针 --> vbtable //虚基类表 
	//v--virtual
	//b--base
	//ptr--pointer 
	SheepTuo st;
	st.Sheep::m_Age=100;
	st.Tuo::m_Age=200;
	
	cout<< "st.Sheep::m_Age = "<<st.Sheep::m_Age<<endl;
	cout<< "st.Tuo::m_Age = "<<st.Tuo::m_Age <<endl;
	cout<< "st.m_Age = "<<st.m_Age <<endl; 
	/*	输出结果(此时未使用虚继承):
			st.Sheep::m_Age = 100
			st.Tuo::m_Age = 200
		输出结果(此时使用虚继承):	
			st.Sheep::m_Age = 200
			st.Tuo::m_Age = 200
			st.m_Age = 200
	*/
}
int main()
{
	test_1(); 
	return 0;
}
#endif
