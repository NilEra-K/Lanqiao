#if 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//后置递增
	//先计算/执行表达式,后对变量进行递增 
	int a =20;
	cout<< a++ <<endl;
	cout<< a   <<endl;
	/**************************
		输出结果:
		20
		21
		 
	**************************/
	//前置递增
	//先对变量进行递增，后计算/执行表达式 
	int b =50;
	cout<< ++b <<endl;
	cout<< b   <<endl;
	/**************************
		输出结果:
		51
		51
		 
	**************************/
	return 0;
}
#endif
