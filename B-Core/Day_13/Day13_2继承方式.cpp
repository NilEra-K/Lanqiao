/*****************************
	本节内容:
	继承方式
	继承的方式有三种:
	1.公共继承 
	2.保护继承 
	3.私有继承 
	
	所以我们此时更新继承的语法:
	class 子类 : 继承方式 父类 
	 
*****************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
class base1{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son1:public base1{
public:
	void func()
	{
		a=10;		//父类中的公共权限成员,到子类中依然是公共权限 
		b=10;		//父类中的权限保护成员,到子类中依然是保护权限 
		//c=10;		//父类中的私有权限成员,子类访问不到  
	}
};
void test_1()
{
	son1 s1;
	s1.a=100;	//类外只能访问到公共权限 
	//s1.b=100;	//son1中 b是保护权限,类外访问不到 
	//s1.b=100;
}
/*--------------------------------------------------------------------------------*/
//保护继承 
class base2{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son2:protected base2{
public:
	void func()
	{
		a=10;		//父类中的公共权限成员,到子类中依然是公共权限 
		b=10;		//父类中的保护权限成员,到子类中依然是保护权限 
		//c=10;		//父类中的私有权限成员,子类访问不到  
	}
}; 
void test_2()
{
	son2 s2;
	//s2.a=100;	//s2中a变为保护权限,类外访问不到 
	//s2.b=100;	//s2中b为保护权限,类外访问不到 
	//s2.c=100; //s2中c为私有权限,类外访问不到 
}
/*--------------------------------------------------------------------------------*/
//私有继承 
class base3{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class son3:private base3{
public:
	void func()
	{
		a=10;		//父类中的公共权限成员,依然可以访问 
		b=10;		//父类中的保护权限成员,依然可以访问 
		//c=10;		//父类中的私有权限成员,子类访问不到  
	}
}; 
void test_3()
{
	son3 s3;
	//s3.a=100;	//s3中a变为保护权限,到子类是私有权限 
	//s3.b=100;	//s3中b为保护权限,到子类是私有权限 
	//s3.c=100; //s3中c为私有权限,类外访问不到 
} 
int main()
{
	
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*总结*/
class A{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
/*==================================*/
/*公有继承*/
class B:public A{
public:
	int a;
protected:
	int b;
//不可访问
	int c;	
};
/*==================================*/
/*保护继承*/
class B:protected A{
protected:
	int a;
	int b;
//不可访问
	int c;	
};
/*==================================*/
/*私有继承*/
class B:public A{
private:
	int a;
	int b;
//不可访问
	int c;	
};
