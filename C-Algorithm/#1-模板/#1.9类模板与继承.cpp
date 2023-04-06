/******************************************************
	本节内容:
	类模板与继承
	*当类模板遇到继承时,需要注意以下几点:
	1.当子类继承的父类是一个类模板时,子类在声明的时候 
	要指定出父类中T的类型 
	2.如果不指定,编译器无法给子类非陪内存 
	3.如果想灵活指出父类中T的类型,子类也需要变为类模板 
******************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class T>
class Base{
	T m;
};
//ERROR:C++编译器需要给子类分配内存,必须知道父类中T的类型 
//		才可以向下继承  
//-->class Son:public Base{
//-->	/*ERROR*/
//-->};
class Son:public Base<int>{//必须指定一个类型 
	
}; 
void test_1()
{
	Son c;
}

//继承类模板,可以用T2指定父亲中的T类型 
template<class T1,class T2>
class Son2:public Base<T2>{
public:
	Son2()
	{
		cout<<typeid(T1).name()<<endl;
		cout<<typeid(T2).name()<<endl;
	}
};
void test_2()
{
	Son2<int,char> c3;
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
