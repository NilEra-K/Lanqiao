/***************************
	本节内容:
	C++对象模型和this指针 
***************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
/********************************
	成员变量和成员函数分开储存 
********************************/
class Person{
public:
	
	int m_A;				//非静态成员变量,占对象空间 
	static int m_B;			//静态成员变量,不占对象空间 
	void fun(){}			//函数不占对象空间,所有函数共享一个函数实例 
	static void func2(){}	//静态成员函数也不占对象空间 
}; 
int Person::m_B=20; 
class B{
/**/
}; 
int main()
{
	Person p;
	cout<<sizeof(p)<<endl;
	/*输出结果: 4 */
	/*可见本Person类占有的只是m_A的空间*/
	B b;
	cout<<sizeof(b)<<endl;
	/*输出结果: 1 */
	/*空独享占用空间为1,因为C++编译器会给空对象也分配一个字节空间*/
	/*以区分空对象占内存的位置*/
	/*每个对象都应该占有独一无二的空间*/
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/****************************************************************
	this 指针:
	
	引入:通过上述代码我们知道C++成员变量呵呵成员函数是分开存储的 
	每一个非静态成员函数只会诞生一份函数实例，也就是收多个同类型 
	的对象或公用一块代码 
	那么问题是:这一块代码是如何区分那个对象调用自己的呢？ 
	
	概念:C++通过特殊的对象指针,this指针,解决上述问题。
	-this指针指向被调用的成员函数所属的对象 
	-this指针是隐含每一个非静态成员函数内的一种指针 
	-this指针不需要定义,直接使用即可 

	this指针的用途:
	1.当形参和成员变量同名时,可用this指针来区分 
	2.在类的非静态成员函数中返回对象本身,可使用return *this 
****************************************************************/

class Person{
public:
//1.当形参和成员变量同名时,可用this指针来区分 
//当然有一个好习惯是更好的 我们直接命名 m_age 可以解决这个问题 
	Person(int age)
	{
		this->age = age;
		//age=age;//无法区分 
	}
//2.在类的非静态成员函数中返回对象本身,可使用return *this 
	Person& PersonAddPerson(Person p)
	//为什么加 '&' : 
	//不加引用返回,则调用拷贝构造函数
	//相当于返回p2不同的另一个Person(只是值都是30) 
	{
		this->age+=p.age;
		return *this;//解引用---指针部分内容 
	} 
	int age; 
}; 


int main()
{
	Person p1(10);
	Person p2(20);
	//链式编程思想 
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout<<p2.age<<endl;

	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/************************************************
	空指针访问成员函数 
	
	C++中空指针也是可以调用成员函数的
	但是也要注意有没有用到this指针
	如果用到 this 指针,需要加以判断代码的健壮性 
************************************************/
class Person{
public:
	void showClassName()
	{
		cout<<"我是Person类"<<endl;
	}
	void showPerson()
	{
		if(this == NULL)
		{
			return;
		}
		cout<<m_Age<<endl; //this->m_Age,this 是空的 
	}
	int m_Age;
};
void test_1()
{
	Person* p=NULL;
	p->showClassName();	//this 可以调用成员函数 
	p->showPerson();	//但是,如果成员函数中用到了this指针,就不可以了 
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*****************************************************************
	Const修饰成员函数
	常函数:
		成员你对象后加const后我们称这个函数为常函数 
		常函数内不可以修改成员属性 
		成员属性声明时候加关键字mutable后,在常函数中依然可以修改 
	常对象:
		声明对象前加const成该对象为常对象
		常对象只能调用常函数 
*****************************************************************/
class Person{
public:
	Person()
	{
		m_A=0;
		m_B=0;
	} 
	//常函数 在函数后面加const 
	void showPerson() const
	{
		//this 的本质
		//Type* const pointer
		//函数后面加const修饰的是this指针,让指针的指向的值也不能修改
		//等于 const Type* pointer
		 
		this->m_B=100;
	}
	void myfunc()
	{
		
	}
	
	int m_A;
	mutable int m_B;
	//如果是int m_B;
	//则showPerson()函数里的this指针无法修改 m_B 的值 
};
void test_2()
{
	Person p;
	cout<<p.m_A <<endl;
	cout<<p.m_B <<endl;
	p.showPerson();
	cout<<p.m_B <<endl;
	
	//常对象
	const Person p1; 
	cout<<p1.m_A <<endl;
	cout<<p1.m_B <<endl;
	//声明对象前加const成该对象为常对象
	//常对象只能调用常函数 
	p1.m_A=10;//常对象不可修改成员变量的值,但是,可以访问 
	p1.m_B=10;//常函数可以修改mutable修饰的成员变量 

	//常对象只能调用常函数
	p1.showPerson();
	p1.myfunc();//无法调用 
	
}

int main()
{
	
	return 0;
}
#endif
