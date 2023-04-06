/*********************************************
	本节内容: 
	虚析构和纯虚析构 
	多态使用时,如果子类中有属性开辟到堆区 
	如果子类中属性开辟到堆区,那么父亲指针 
	在释放时无法调用到子类的析构 
	解决方式:
	将父亲中析构函数改为虚析构或者纯虚析构 
	
	*注意*
	都要有具体的函数实现 
	
	虚析构和纯虚析构的区别 :
	如果是纯虚析构,该类属于抽象类,无法实 
	例化对象  
*********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
	Animal()
	{
		cout<<"Animal构造函数的调用"<<endl;
	}
	virtual void Speak()=0;
	//虚析构函数,可以解决父类指针释放子类对象不干净的问题 
	virtual ~Animal()
	{
		cout<<"Animal析构函数的调用"<<endl;
	}
	//纯虚析构函数 
	virtual ~Animal()=0;
	
};
//纯虚析构函数也要进行实现  
Animal::~Animal()
{
	cout<<"Animal析构函数的调用"<<endl;
} 

class Cat:public Animal{
public:
	Cat(string name){
		cout<<"Cat构造函数的调用"<<endl;
		m_Name =new string (name);
	}
	virtual void Speak()
	{
		cout<<*m_Name <<"小猫在说话"<<endl;
	}
	
	virtual ~Cat()
	{
		cout<<"Cat的析构函数的调用"<<endl;
		if(this->m_Name!=NULL)
		{
			delete m_Name;
			m_Name=NULL;
		}
	}
	string* m_Name;
};
void test_1()
{
	Animal* animal=new Cat("Tom");
	animal->Speak();
	delete animal;
	//通过父类指针去释放会导致子类对象释放不干净 
	//给基类添加虚析构函数 
}
int main()
{
	test_1();
	return 0;
}
#endif
