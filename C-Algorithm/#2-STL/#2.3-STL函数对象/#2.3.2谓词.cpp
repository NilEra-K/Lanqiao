/*************************************************
	本节内容:
	谓词 
	概念:
	返回bool类型的仿函数称为谓词 
	如果operator()接受一个参数,那么叫做一元谓词 
	如果operator()接受两个参数,那么叫做二元谓词 
*************************************************/

#if 1
#include<bits/stdc++.h>
using namespace std;
class GreaterFive{
public:/*一元谓词*/
	bool operator()(int val)
	{
		return val>5;
	}
}; 
class MyCompare{
public:/*二元谓词*/
	bool operator()(int num_1,int num_2)
	{
		return num_1>num_2;
	}
};
void test_1()
{
	
}

int main()
{
	test_1();
	return 0;
}
#endif
