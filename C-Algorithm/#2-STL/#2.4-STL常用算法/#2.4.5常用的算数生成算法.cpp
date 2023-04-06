/*****************************************************
	本节内容:
	常用算法--算数生成算法 
	属于小型算法,使用时包含的头文件为#include<numeric>
	
	accumulate	//计算容器元素累计总和 
	accumulate(iterator begin,iterator end,value);
----begin	开始迭代器 
----end		结束迭代器 
----value	起始值 	
	
	fill		//向容器中添加元素 
	fill(iterator begin,iterator end,value); 
----begin	开始迭代器 
----end		结束迭代器 
----value	填充的值  	

******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	vector<int> v;
	for(int i=0;i<=100;i++){
		v.push_back(i);
	}
	//本程序是计算了1+2+3+4+...+100的总和 
	int total =accumulate(v.begin(),v.end(),0);
	cout<<"total = "<<total<<endl;
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

class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
void test_1()
{
	vector<int> v;
	v.resize(10);
	//填充 
	fill(v.begin(),v.end(),100);
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl; 
}
int main()
{
	test_1();
	return 0;
}
#endif 
