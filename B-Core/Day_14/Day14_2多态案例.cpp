/***************************
	本节内容:
	多态案例----计算器类  
***************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//普通实现  
class Calculator{
public:
	int getResult(string oper)
	{
		if(oper=="+"){
			return m_Num1+m_Num2;
		}else if(oper=="-"){
			return m_Num1-m_Num2;
		}else if(oper=="*"){
			return m_Num1*m_Num2;
		}
	}
	int m_Num1;
	int m_Num2;
/*普通实现*/
//如果要提供新的运算,则需要修改源码 
//在真实开发环境中,提倡开闭原则
//开闭原则 : 对扩展进行开放,对修改进行关闭  
};

//多态实现 /*AbstractCalculator抽象计算器*/
//多态优点:
//代码组织结构清晰 
//可读性强 
//利于前期和后期的扩展以及维护  
/***************************************
	这里加深对多态的个人理解 : 
	多态可以说是多种状态---
	以计算器类为例子:父类是抽象计算器-
	子类分别可以进行对父类多种状态的操作 
	抽象计算器 
	-|--------加法计算器状态 
	-|--------减法计算器状态 
	-|--------乘法计算器状态 

***************************************/
class AbstractCalculator{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
}; 
class AddCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1+m_Num2;
	}
};
class SubCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1-m_Num2;
	}
};
class MulCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1*m_Num2;
	}
};

void test_1()
{
	Calculator c;
	c.m_Num1=10;
	c.m_Num2=10;
	cout<<c.m_Num1<<" + "<<c.m_Num2<<" = "<<c.getResult("+")<<endl;
	cout<<c.m_Num1<<" - "<<c.m_Num2<<" = "<<c.getResult("-")<<endl;
	cout<<c.m_Num1<<" * "<<c.m_Num2<<" = "<<c.getResult("*")<<endl;
}
void test_2()
{
	//*多态使用条件 : 父类指针或引用指向子类对象
	//创建一个加法计算器 
	AbstractCalculator* abc =new AddCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" + "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;
	//创建一个减法计算器 
	abc =new SubCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" - "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;
	//创建一个乘法计算器 
	abc =new MulCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" * "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc; 
}
int main()
{
	test_1(); 
	test_2();
	return 0;
}
#endif


#if 0
/****************
	本节内容:
	多态剩余  
****************/
#include<bits/stdc++.h>
using namespace std;
/*纯虚函数和抽象类*/
//在多态中,通常父类中虚函数的是实现是毫无意义的 
//主要都是调用子类重写的内容 -----> 重写:函数返回值类型 函数名 参数列表 完全一致称为重写 
//因此可以将虚函数改为纯虚函数 
//***纯虚函数语法: 
//virtual 返回值类型 函数名 (参数列表)=0;
//当类中有了纯虚函数,这个类也称为抽象类 

/*抽象类*/
//类中有一个纯虚函数,这个类就是抽象类 
//抽象类无法实例化对象 
//*注意:子类必须去重写父亲中的纯虚函数,否则也属于抽象类  
class Animal{
public:
	/*
	virtual void speak()
	{
		cout<<"动物在说话!"<<endl; 
	}
	*/
	/*纯虚函数*/
	virtual void speak()=0;
}; 
class Cat:public Animal{
public:
	void speak()
	{
		cout<<"小猫在说话!"<<endl;
	}
};
void doSpeak(Animal& animal)
{
	animal.speak();
}
void test_1()
{
	Cat cat;
	doSpeak(cat);
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
/*多态案例------饮品类*/
class AbstractDrinking{
public:
	//烧水  
	virtual void Boil()=0;
	//冲泡
	virtual void Brew()=0;
	//倒入杯中 
	virtual void PourInCup()=0;
	//加入辅料 
	virtual void PutSomething()=0;
	
	//规定流程 
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//制作咖啡 
class Coffee:public AbstractDrinking{
public:
	//烧水 
	virtual void Boil()
	{
		cout<<"-煮农夫山泉-"<<endl;
	}
	//冲泡 
	virtual void Brew()
	{
		cout<<"-冲泡咖啡-"<<endl;
	}
	//倒入杯中  
	virtual void PourInCup()
	{
		cout<<"-将咖啡倒入杯中-"<<endl;
	}
	//加入辅料  
	virtual void PutSomething()
	{
		cout<<"-加入牛奶-"<<endl;
	} 
}; 
//制作咖啡 
class Tea:public AbstractDrinking{
public:
	//烧水 
	virtual void Boil()
	{
		cout<<"-煮自来水-"<<endl;
	}
	//冲泡 
	virtual void Brew()
	{
		cout<<"-冲泡茶叶-"<<endl;
	}
	//倒入杯中  
	virtual void PourInCup()
	{
		cout<<"-将茶水倒入杯中-"<<endl;
	}
	//加入辅料  
	virtual void PutSomething()
	{
		cout<<"-加入枸杞-"<<endl;
	} 
};
void doWork(AbstractDrinking* drink)
{
	drink->MakeDrink();
	delete drink;
}
void test_1()
{
	doWork(new Coffee);//AbstractDrinking* abs =new Coffee;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	doWork(new Tea);
}
int main()
{
	test_1();
	return 0;
}
#endif
