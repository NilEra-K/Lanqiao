/**************************************************
	本节内容: 
	继承中的对象模型 
	问题: 从父类继承过来的成员,那些属于子类对象中? 
**************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	int m_A;
protected:
	int m_B;
private://私有成员只是被隐藏了,但是还是会继承下去 
	int m_C;
}; 
//公共继承 
class Son:public Base{
public:
	int m_D;
};
void test_1()
{
	cout<<"The Size of Son is : "<<sizeof(Son)<<endl;
	/*输出结果 : 16 */
	//父类中所有的非静态成员属性都会被子类继承下去  
	//cl /d1 reportSingleClassLayoutSon "NAME.cpp"可以看到类的关系  
}
int main()
{
	test_1();
	return 0;
}
#endif
