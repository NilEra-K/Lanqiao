/*************************************************
	��������:
	ν�� 
	����:
	����bool���͵ķº�����Ϊν�� 
	���operator()����һ������,��ô����һԪν�� 
	���operator()������������,��ô������Ԫν�� 
*************************************************/

#if 1
#include<bits/stdc++.h>
using namespace std;
class GreaterFive{
public:/*һԪν��*/
	bool operator()(int val)
	{
		return val>5;
	}
}; 
class MyCompare{
public:/*��Ԫν��*/
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
