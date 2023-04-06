/*****************************************************
	本节内容:
	常用算法--集合算法 
	set_intersection	//求两个容器的交集 
	//两个集合必须是有序数列  
	//vTarget开辟空间时需要我们从两个容器中取小值 
	//set_intersection返回值即是交际中最后一个元素的位置  
	set_intersection(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest);
----begin_1		容器1开始迭代器	 
----end_1		容器1结束迭代器 
----begin_2		容器2开始迭代器 
----end_2		容器2结束迭代器 
----dest		目标容器开始迭代器 
	
	set_union			//求两个容器的并集 
	//vTarget开辟空间时需要我们取两个容器之和  
	set_union(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest); 
----begin_1		容器1开始迭代器	 
----end_1		容器1结束迭代器 
----begin_2		容器2开始迭代器 
----end_2		容器2结束迭代器 
----dest		目标容器开始迭代器 

	set_difference		//求两个容器的差集 
	set_difference(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest); 
----begin_1		容器1开始迭代器	 
----end_1		容器1结束迭代器 
----begin_2		容器2开始迭代器 
----end_2		容器2结束迭代器 
----dest		目标容器开始迭代器 
******************************************************/
#if 0
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
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//取两个里面较小的值给目标容器开辟空间 
	vTarget.resize(min(v1.size(),v2.size()));
	
	//返回目标容器的最后一个元素的迭代器地址 
	vector<int>::iterator itEnd=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
	cout<<endl;
}	
int main()
{
	test_1();
	return 0;
} 
#endif

#if 0
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
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//vTarget开辟空间时需要我们取两个容器之和  
	vTarget.resize(v1.size()+v2.size());
	
	//返回目标容器的最后一个元素的迭代器地址 
	vector<int>::iterator itEnd=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
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
class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
void test_1()
{
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//取两个里面较大的值给目标容器开辟空间 
	vTarget.resize(max(v1.size(),v2.size()));
	
	//返回目标容器的最后一个元素的迭代器地址 
	vector<int>::iterator itEnd=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
	cout<<endl;
}	
int main()
{
	test_1();
	return 0;
} 
#endif
