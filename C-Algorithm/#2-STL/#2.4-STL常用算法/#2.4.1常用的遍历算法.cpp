/*************************************************
	本节内容:
	常用算法--遍历  
	算法由头文件 
	#include<algorithm> 
	#include<functional> 
	#include<numeric> 
	组成 

	<algorithm> 
	所有头文件中最大的一个
	范围涉及到比较,交换,查找,遍历,复制,修改... 
	<numeric> 
	体积很小
	只包括几个在序列上面进行简单数学运算的模板函数 
	<functional> 
	定义了一些模板类,用以声明函数对象 
	 
	 
	遍历算法:
	for_each	//遍历容器 
	for_each(iterator begin,iterator end,_func);
----begin	开始迭代器 
----end		结束迭代器 
----_func	函数或者函数对象 
	
	transform	//搬运容器到另一个容器中 
	***注意:目标容器需要提前开辟空间,否则无法正常搬运  
	transform(iterator begin_1,iterator end_1,iterator beg_2,_func);
----begin_1		源容器开始迭代器 
----end_1		源容器结束迭代器 
----begin_2		目标容器开始迭代器  
----_func		函数或者函数对象  
*************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//普通函数 
void print_1(int val)
{
	cout<<val<<' ';
}
//函数对象 
class print_2
{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
//for_each算法基本用法 
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	//遍历算法 
	for_each(v.begin(),v.end(),print_1);
	cout<<endl; 
	for_each(v.begin(),v.end(),print_2()); 
	cout<<endl; 
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
//transform
class TransForm{
public:
	int operator()(int val)
	{
		return val;
	}
};
class MyPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
	vector<int> vTarget;//目标容器 
	vTarget.resize(v.size());//目标容器需要提前开辟空间 
	transform(v.begin(),v.end(),vTarget.begin(),TransForm()) ;
	for_each(vTarget.begin(),vTarget.end(),MyPrint()); 
	
}
int main()
{
	test_1();
	return 0;
}
#endif
