/**************************
	本节内容 : 
	类和对象_封装 
	-=-=-=-=-=-=-=-=-=-
	语法 : 
	class 类名
	{
	访问权限:  
		行为:
		属性:
	};
	
**************************/
#if 0
#define PI 3.14 
#include<bits/stdc++.h>
using namespace std;
//封装意义一 : 
//将属性和行为写在一起,表现事物

//定义了一个圆类 
class Circle
{
public:
	//行为
	double calcC()/*计算周长 Calculate C*/
	{
		return 2 * PI * m_r;
	}
	//属性
	int m_r;	
};
//设计一个学生类
class Student
{
public:
	//行为
	void setName(string name)
	{
		//设置名字 
		m_name=name;
	} 
	void setID(int id)
	{
		//设置学号 
		m_id=id;
	}
	void showStudent()
	{
		cout<<"姓名 : "<<m_name<<endl;
		cout<<"学号 : "<<m_id<<endl;
	}
	//属性:
	string m_name;
	int m_id;	
}; 
int main()
{
	//通过圆类,创建了一个圆类的对象c1
	//c1就是一个具体的圆 
	Circle c1;
	c1.m_r=10;//给圆对象的半径进行赋值操作
	double rst=c1.calcC();
	cout<<"圆的周长为 : "<<rst<<endl; 
	
	Student s1;
	s1.m_name="德玛西亚";
	s1.m_id=250;
	cout<<"姓名 : "<<s1.m_name<<endl;
	cout<<"学号 : "<<s1.m_id<<endl; 
	
	Student s2;
	string name;
	int id;
	cin>>name;
	cin>>id;
	s2.setName(name);
	s2.setID(id);
	s2.showStudent();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
//封装意义二 : 
//类在设计时,可以把属性和行为放在不同的权限下,加以控制 
//访问权限有三种 : 
// public 		公共权限	类内可以访问 类外也可以访问 
// protected 	保护权限 	类内可以访问 类外不可以访问
// private 		私有权限	类内可以访问 类外也可以访问
// 暂时无法看出-保护权限-和-私有权限-的区别 (继承)  
// 举个例子:保护权限 ->儿子可以访问父亲的东西
// 			私有权限 ->父亲的东西太过私有以至于儿子也无法访问 

//创建一个人类 : 
class Person
{
public:
	void func(){
		m_name="李四";
		m_car ="拖拉机";
		m_psw =000; 	
	}
	void showPerson()
	{
		cout<<m_name<<endl;
		cout<<m_car<<endl;
		cout<<m_psw<<endl;
	}
	//姓名 公共权限
public:

	string m_name;
	//汽车 保护权限 
protected:
	string m_car;
	//银行卡密码: 
private: 
	int m_psw;
};
//struct 和 class的区别
/*
	在C++中 struct和class唯一的区别就在于默认的访问权限不同
	区别:
	-struct	默认权限为公共
	-class	默认权限为私有 
*/ 
int main()
{
	Person p;
	p.m_name="张三";
	cout<<p.m_name<<endl;
	//下面这两行代码分别访问车和密码
	//我们没有访问权限,因此无法访问 
	//p.m_car="奔驰";
	//p.m_psw="123"; 
	p.func();
	p.showPerson();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
//struct默认权限 public 
struct s1
{
	int m_s1;
};
//class 默认权限 private 
class c1
{
	int m_c1;
};
int main()
{
	s1 S1;
	S1.m_s1=10;
	
	c1 C1;
	C1.m_c1=10;//无法访问 
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/*
	成员属性设置为私有
	优点 1: 将所有成员属性设置为私有,可以自己控制读写权限
	优点 2: 对于写权限,我们可以检测数据的有效性 
*/
class Person{
public:
	//姓名 可读可写
	string getName()
	{
		return m_name;	
	}
	void setName(string name)
	{
		m_name=name;
	}
	//年龄 只读 
	int getAge()
	{
		m_age=18;
		/*便于调试*/
		return m_age;
	}
	void setAge(int age)
	{
		if(age<0 || age>120){
			cout<<"老妖精"<<endl;
			return;
		}
		m_age=age;
	}
	//情人 只写 
	void setLover(string loverName)
	{
		m_lover =loverName;
	}
private:
	string m_name;	//姓名 可读可写 
	int m_age;		//年龄 只读 
	string m_lover;	//情人 只写 
};
int main()
{
	Person p;
	
	//设置姓名
	p.setName("张三");
	cout<<"姓名 : "<<p.getName()<<endl;
	//年龄
	int a;
	cin>>a;
	p.setAge(a);
	cout<<"年龄 : "<<p.getAge()<<endl;
	//情人
	p.setLover("苍井");
	return 0;
}
#endif


#if 0
#include<bits/stdc++.h>
using namespace std;
//立方体类设计
//1.创建一个立方体类
//2.设计属性
//3.设计行为:获取立方体面积和体积
//4.分别用全局函数和成员函数判断两个立方体是否相等 
class Cube{
public:
	//长 
	void setL(int l)
	{
		m_L=l;
	}
	int getL()
	{
		return m_L;	
	}
	//宽
	void setW(int w)
	{
		m_W=w;
	}
	int getW()
	{
		return m_W;	
	}
	//高 
	void setH(int h)
	{
		m_H=h;
	}
	int getH()
	{
		return m_H;	
	}
	//获取立方体的面积
	int calcS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;	
	}
	//获取立方体的体积
	int calcV()
	{
		return m_L*m_W*m_H;
	}
	//利用成员函数判断c1 c2是否相等 
	bool isSameByClass(Cube& c)
	{
		if(m_L==c.getL()&&m_W==c.getW()&&m_H==c.getH()){
			return true;
		}else{
			return false;
		}
	}
private:
	int m_L;
	int m_W;
	int m_H; 
};
//利用全局函数判断c1 c2是否相等 
bool isSame(Cube& c1,Cube& c2)
{
	if(c1.getL()==c2.getL() && c1.getH()==c2.getH() && c1.getW()==c2.getW()){
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout<<"S[c1]= " <<c1.calcS()<<endl;
	cout<<"V[c1]= " <<c1.calcV()<<endl; 
	
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);
	cout<<"S[c2]= " <<c2.calcS()<<endl;
	cout<<"V[c2]= " <<c2.calcV()<<endl; 
	//利用全局函数判断c1 c2是否相等 
	if(isSame(c1,c2)){
		cout<<"C1=C2"<<endl;
	}else{
		cout<<"C1!=C2"<<endl;
	}
	//利用成员函数判断c1 c2是否相等 
	if(c1.isSameByClass(c2)){
		cout<<"C1=C2"<<endl;
	}else{
		cout<<"C1!=C2"<<endl;
	}
	
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
class Point{
public:
	//x点 
	void setX(int X)
	{
		m_X=X;
	}
	int getX()
	{
		return m_X;
	}
	//y点 
	void setY(int Y)
	{
		m_Y=Y;
	}
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
class Circle{
public:
	//半径
	void setR(int R)
	{
		m_R=R;
	}
	int getR()
	{
		return m_R;
	}
	//圆心
	void setCenter(Point center)
	{
		m_Center=center;
	}
	Point getCenter()
	{
		return m_Center; 
	}
private:
	int m_R;
	//在类中可以让另一个类作为本类中的成员
	Point m_Center; 
};

//判断点和圆的关系
void isInCircle(Circle& c,Point& p)
{
	int distance=sqrt(pow(c.getCenter().getX()-p.getX(),2)+pow(c.getCenter().getY()-p.getY(),2));
	if(distance ==c.getR()){
		cout<<"点在圆上"<<endl;
	}else if(distance>c.getR()){
		cout<<"点在圆外"<<endl;
	}else{
		cout<<"点在圆内"<<endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	
	Point p;
	p.setX(10);
	p.setY(10);
	
	isInCircle(c,p);
	return 0;
}
#endif
