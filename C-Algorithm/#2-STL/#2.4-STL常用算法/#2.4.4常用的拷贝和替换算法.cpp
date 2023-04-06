/*****************************************************
	本节内容:
	常用算法--拷贝和替换算法 
	copy		//容器内指定范围的元素拷贝到另一容器中 
	//利用copy算法在拷贝时,目标容器记得提前开辟空间  
	copy(iterator begin,iterator end,iterator dest);
----begin	开始迭代器  
----end		结束迭代器  
----dest	目标起始迭代器 
	
	replace		//容器内指定范围的旧元素修改为新元素 
	replace(iterator begin,iterator end,oldvalue,newvalue);
----begin	开始迭代器  
----end		结束迭代器  
----oldvalue旧元素  
----newvalue新元素 

	replace_if	//容器内指定范围内满足条件的元素替换为新元素 
	replace_if(iterator begin,iterator end,_Pred,newvalue);
----begin	开始迭代器  
----end		结束迭代器  
----_Pred	谓词  
----newvalue替换的新元素  
	
	swap 		//互换两个容器的元素 
	//不进行演示 
	swap(container c1,container c2);
----container容器 
----c1	容器_1  
----c2	容器_2  
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
	for(int i=0;i<10;i++){
		v1.push_back(i+1);
	}
	vector<int> v2;
	v2.resize(v1.size()); 
	copy(v1.begin(),v1.end(),v2.begin());
	
	for_each(v2.begin(),v2.end(),myPrint());
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
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	
	cout<<"替换前 : "<< endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	//将容器中的20替换为2000  
	cout<<"替换后 : "<< endl;
	replace(v.begin(),v.end(),20,2000);
	 
	for_each(v.begin(),v.end(),myPrint());
	cout<< endl;
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
class ReplaceGreater30{
public:
	bool operator()(int val)
	{
		return val>=30;
	}
}; 

void test_1()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	
	cout<<"替换前 : "<< endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	//将容器中大于等于的30 替换成 3000   
	cout<<"替换后 : "<< endl;
	replace_if(v.begin(),v.end(),ReplaceGreater30(),3000);
	for_each(v.begin(),v.end(),myPrint());
	cout<< endl;
}
int main()
{
	test_1();
	return 0;
}
#endif

