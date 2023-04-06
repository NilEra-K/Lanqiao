/******************************************************************
	本节内容:
	对象的初始化和清理 
	对象的初始化和清理是两个非常重要的安全问题 
	1.一个对象或者变量没有初始状态 
	对其使用的结果是未知 
	2.同样的使用完一个对象或变量,没有即使清理,也会造成一定安全问题 
	
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	C++ 利用构造函数和析构函数解决上述问题 
	构造函数:主要作用于创建对象时为对象的成员属性赋值,构造函数由
	编译器自动调用,无需手动调用 
	
	析构函数:主要作用在于对象销毁前系统自动调用,执行一些清理工作 
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	构造函数:
	类名 () {}
	1.构造函数,没有返回值也不写 void
	2.函数名称与类名
	3.构造函数可以有参数,因此可以发生重载 
	4.程序在调用对象时候会自动调用构造,无需手动调用,而且只会调用一次 
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	析构函数:
	~类名 () {} 
	1.析构函数,没有返回值也不写 void
	2.函数名称与类名,在名称前加上符号' ~ '
	3.析构函数不可以有参数,因此不可以发生重载 
	4.程序在对象销毁前会自动调用析构,无需手动调用,而且只会调用一次 

******************************************************************/

#if 0
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	//构造函数 
	//类名 () {}
	Person()
	{
		cout<<"Person()构造函数的调用"<<endl;
	}
	//析构函数 
	//~类名 () {}
	~Person()
	{
		cout<<"Person()析构函数的调用"<<endl;
	} 
};
void test_1()
{
	Person p;
}
int main()
{
	test_1();
	//Person()构造函数的调用 
	//Person()析构函数的调用 
	Person q;
	//Person()构造函数的调用 
	system("pause");
	//Person()析构函数的调用 
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/*******************************
	构造函数的分类及调用 
	
	两种分类方式: 
	按参数分为:有参构造和无参构造
	按类型分为:普通构造和拷贝构造
	
	三种调用方式:
	括号法
	显示法
	隐式转化法 
*******************************/

class Person{
public:
	//无参(默认)构造函数 
	Person()
	{
		cout<<"无参构造函数调用"<<endl;
	}
	//有参构造函数 
	Person(int a)
	{
		age=a;
		cout<<"有参构造函数调用"<<endl;
	}
	//拷贝构造函数(引用方式传进来的,这种形式是拷贝构造函数) 
	//传进一个Person p,完全赋值它 
	//const:确保原来的 p 不被改变 
	Person(const Person& p)
	{
		age=p.age;
		cout<<"拷贝构造函数调用"<<endl;
	} 
	//析构函数 
	~Person()
	{
		cout<<"析构函数的调用"<<endl;
	}
	//属性 
	int age; 
};
void test_2()
{
	/*调用方式*/
	
	/*1.括号法--最常用的方法*/
	Person p;		//调用无参构造函数 
	//注意:调用无参函数不能加括号,否则编译器会认为这是一个函数的声明 
	Person p1(10);	//调用无参构造函数 
	cout<<p1.age<<endl; 
	
	Person p3(p1);
	cout<<p3.age<<endl;//调用拷贝构造函数 
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
	/*2.显示法*/
	
	Person p4=Person(10);//有参构造 
	Person p5=Person(p4);//拷贝构造 
	cout<<p5.age<<endl;
	//以上赋值运算左侧为对象名称 
	//Person(10);//单独写就是匿名对象,执行完当前行立即析构 
	//Person(p5);//err 
	cout<<p5.age<<endl;
	//注意: 不能利用拷贝构造函数去初始化匿名对象,编译器认为这是对象声明 
	//注意: 尽量不要使用匿名对象 
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
	
	/*3.隐式转化法*/ 
	Person p6 = 10;//相当于Person p6 = Person(10);
	Person p7 = p6;//相当于Person p7 = Person(p6);
	//如果要传入多个参数,需要使用大括号 

}
int main()
{
	test_2();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/******************************************
	拷贝构造函数调用的时机:
	C++中拷贝构造函数调用时机通常有3种情况:
	1.使用一个已经创建完毕的对象来初始化一个新对象 
	2.值传递的方式给函数参数传值 
	3.以值方式返回局部对象 
******************************************/
class Person{
public:
	Person()
	{
		cout<<"无参构造函数的调用"<<endl;
	}
	Person(int age)
	{
		m_age=age;
		cout<<"有参构造函数的调用"<<endl;
	}
	Person(const Person& p)
	{
		m_age=p.m_age;
		cout<<"拷贝构造函数的调用"<<endl; 
	}
	~Person()
	{
		cout<<"析构函数的调用"<<endl;
	}
	//属性 
	int m_age;
};
void dowork(Person p)
{
	
}
Person dowork()
{
	Person p;
	cout<< &p <<endl;
	return p;
}

void test_3()
{
	//1.使用一个已经创建完毕的对象来初始化另一个对象
	Person p1(100);
	Person p2(p1);	//Person p2 = p1; 
	Person p3;
	p3 = p1;//不是调用拷贝构造函数,而是一个赋值操作 
	cout<<p3.m_age<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
	//2. 值传递的方式给函数参数传值
	dowork(p1);
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
	//3.以值返回局部对象 
	Person p4 = dowork();
	cout<<&p4<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
}
int main()
{
	test_3(); 
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/******************************************
	拷贝构造函数调用的规则:
	
	默认情况下,C++编译器至少给一个类添加3个函数
	1.默认构造函数(无参,函数体为空) 
	2.默认析构函数(无参,函数体为空) 
	3.默认拷贝构造函数,对属性进行拷贝 
	
	构造函数调用规则如下:
	1.如果永辉定义有参构造函数,C++不在踢狗默认无参构造 
	但是会提供默认拷贝构造 
	2.如果用户定义拷贝构造函数,C+不会再提供其他构造函数 
******************************************/
class Person
{
public:
	//有参构造函数
	
	Person(int a)
	{
		m_age=a;
	}
	
	//拷贝构造函数
	Person(const Person& p)
	{
		m_age=p.m_age;
		cout<<"拷贝构造函数的调用"<<endl;
	}
	~Person()
	{
		cout<<"无参构造函数的调用"<<endl;
	}
	int m_age;
}; 

int main()
{
	Person p1(10);
	Person p2(p1);
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/**********************************
	深拷贝和浅拷贝:
	深浅拷贝是经典的面试问题
	也是常见的一个坑
	浅拷贝:简单的赋值拷贝操作
	深拷贝:在堆区重新申请空间,进行拷贝操作
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	总结:如果属性有在堆区开辟的
	一定要自己提供拷贝构造函数
	防止浅拷贝带来的问题 
**********************************/
class Person{
public:
	Person()
	{
		cout<<"无参构造函数的调用"<<endl;
	}
	Person(int age,int height)
	{
		m_age=age;
		m_height=new int(height);
		cout<<"有参构造函数的调用"<<endl;
	}
	/*
	Person(const Person& p)
	{
		m_age=p.m_age;
		m_height=p.m_height; 
		cout<<"拷贝构造函数的调用"<<endl; 
	}
	*/
	
	//自己去写拷贝构造函数,并且要进行深拷贝操作
	//解决同一块堆区内存重复释放的问题 
	Person(const Person& p)
	{
		m_age=p.m_age;
		//防止一块堆区空间重复释放的问题 
		m_height=new int(*p.m_height)//深拷贝操作 
		cout<<"拷贝构造函数的调用"<<endl;
	}
	~Person()
	{
		if(m_height !=NULL){
			delete m_height;
			m_height = NULL;
		}
		
		cout<<"析构函数的调用"<<endl;
	}
	//属性 
	int m_age;
	int* m_height;
};
void test_4()
{
	Person p1(18,180);
	Person p2(p1);
	cout<<"p1 Age:"<< p1.m_age<<endl<<"p1 Height"<<*p1.m_height<<endl;
	cout<<"p2 Age:"<< p2.m_age<<endl<<"p2 Height"<<*p2.m_height<<endl;
}
int main()
{
	test_4();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/******************************
	初始化列表:
	作用:C++提供了初始化列表语法,用来初始化属性 
******************************/
class Person
{
public:
	//构造函数去初始化 
	Person(int a,int b,int c)
	{
		m_A=a;
		m_B=b;
		m_C=c;
	}
	//使用初始化列表去初始化 
	//语法:构造函数():属性1(值1),属性2(值2),属性3(值3){}  
	//Person():m_A(30),m_B(40),m_C(50){}
	Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
	{
		cout<<"有参函数的调用"<<endl; 
	}
	int m_A;
	int m_B;
	int m_C;
};
int main()
{
	Person p1(10,20,30);
	//Person p1;
	cout<< p1.m_A <<endl;
	cout<< p1.m_B <<endl;
	cout<< p1.m_C <<endl;
	
	return 0;
} 
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/*************************************
	类对象作为类成员
	C++类中的成员可以是另一个类的对象
	我们称该成员为对象成员class A{} 
	
	例:
	class B
	{
		A a;
	} 
*************************************/
class A
{
public:
	A()
	{
		cout<<"A的构造函数调用"<<endl;
	}
	~A()
	{
		cout<<"A的析构函数调用"<<endl;
	}
	int m_A;
};
class B
{
public:
	B()
	{
		cout<<"B的构造函数调用"<<endl;
	}
	~B()
	{
		cout<<"B的析构函数调用"<<endl;
	}
	A a;
	
};
void test_5()
{
	B b;
}
int main()
{
	test_5();
	/******************
	输出结果 : 
		A的构造函数调用
		B的构造函数调用
		B的析构函数调用
		A的析构函数调用
	******************/
	//总结:当其他类成员作为本类对象,在构造时先构造其他类对象,再构造自身。
	//析构顺序与构造相反 
	
	return 0;
} 
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*********************************************
	静态成员:
	静态成员就是在成员函数前加上关键字static,称为静态成员
	静态成员分为:
		静态成员变量:
			所有对象共享同一份数据
			在编译阶段分配内存 
			类内声明,类外初始化
		静态成员函数:
			所有对象共享同一个函数
			静态成员函数只能访问静态成员变量 
*********************************************/
class Person{
public:
	//静态成员变量
	static int m_A;
	//静态从成员变量特点: 
	//所有对象共享同一份数据 
	//在编译阶段分配内存 
	//类内声明,类外初始化

	//静态成员函数
	//静态成员函数特点
	//1.所有对象共享一个函数
	//2.静态成员函数只能去访问静态成员变量(类内所有对象共享同一份数据) 
	static void func()//静态成员函数也是有访问权限的 
	{
		//m_C=100;//ERROR 不可以访问非静态变量成员 
		cout<<"func的调用"<<endl;
	}
private:
	static int m_B;//静态成员变量也是有访问权限的 
}; 
int Person::m_A=20;
int Person::m_B=10;
/*' :: '两个冒号是作用域符号*/
void test_6()
{
	//静态成员变量的两种访问方式
	
	//1.通过对象
	Person p1;
	p1.m_A=100;
	cout<<p1.m_A<<endl;
	
	Person p2;
	p2.m_A=200;
	cout<<p1.m_A<<endl;
	cout<<p2.m_A<<endl;
	/*输出的两个数据都是一样的*/
	/*打个比方 : 珠穆朗玛峰是属于全人类的*/ 
	
	//2.通过类名(静态变量不属于某个对象,属于类)
	cout<<"m_A = "<<Person::m_A<<endl;
	//cout<<"m_B = "<<Person::m_B<<endl;//静态成员变量也是有访问权限的 
} 
void test_7()
{
	//静态成员函数的两种访问方式
	//1.通过对象
	Person p3;
	p3.func();
	
	//2.通过类名
	Person::func(); 
}
int main()
{
	test_6();
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	test_7();
	return 0;
}
#endif
