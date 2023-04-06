/*************************************************************

	本节内容:
	多态 
	多态分为两类 :
		静态多态 : 函数重载和运算符重载属于静态多态,复用函数名 
		动态多态 : 派生类和虚函数实现运行时多态 
	静态多态和动态多态区别 : 
		静态多态的函数地址早绑定--编译阶段确定函数地址 
		动态多态的函数地址晚绑定--运行阶段确定函数地址  
*************************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Animal{/*内部储存了一个 * vfptr *虚函数*/
public:
	//函数前面加入virtual关键字,就变成了虚函数
	//那么编译器在编译的时候就不能确定函数调用了  
	//speak函数就是虚函数 
	virtual void speak()
	{
		cout<<"动物在说话"<<endl;
	}
};
class Cat:public Animal{
public:
	//函数的重写,函数返回值类型、函数名、参数列表必须相同 
	virtual/*可写可不写*/ void speak()
	{
		cout<<"小猫在说话"<<endl;
	}
};
//我们希望传入什么对象,那么就调用什么对象函数 
class Dog:public Animal{
public:
	void speak()
	{
		cout<<"小狗在说话"<<endl;
	}
};
//如果函数地址在编译阶段就能确定,那么静态联编 
//如果函数地址在运行阶段才能确定,那么动态联编 
 
void Dospeak(Animal& animal)//通过vfptr->Animal& animal=cat; 
{
	animal.speak();
}
void test_1()
{
	Cat cat;
	Dog dog;
	Dospeak(dog);	//这里父亲引用接受子类对象,C++允许父子类型转换  
}
//多态满足条件
//1.有继承关系
//2.子类重写父亲中的虚函数 

//多态的使用 
//父类的指针或引用指向子类 
void test_2()
{
	cout<<"Size Of Animal : "<<sizeof(Animal)<<endl;
} 
int main()
{
	test_1();	
	test_2();
	return 0;	
}
#endif
