/*****************************************************
	本节内容:
	常用算法--排序  
	sort			//对容器内元素进行排序 
	//按值查找元素
	//找到返回指定位置迭代器 
	//找不到返回结束迭代器位置  
	sort(iterator begin,iterator end,_Pred);
----begin 	开始迭代器 
----end		结束迭代器 
----_Pred	谓词 
 
	random_shuffle	//洗牌 指定范围内元素速记调整次序 
	random_shuffle洗牌算法比较使用,使用时记得加随机数种子   
	random_shuffle(iterator begin,iterator end);
----begin 	开始迭代器 
----end		结束迭代器 
	 
	merge			//容器元素合并,并存储到零一容器中  
	//两个容器必须是有序的  
	merge(iterator begin_1,iterator end_1,iterator begin_2,iterator,end_2,iterator dest);
----begin_1	容器1开始迭代器 
----end_1	容器1结束迭代器 
----begin_2	容器2开始迭代器 
----end_2	容器2结束迭代器 
----dest	目标容器开始迭代器	
	
	reverse			//反转指定范围内的元素 
	reverse(iterator begin,iterator end);
----begin	开始迭代器 
----end		结束迭代器 
 
******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
void myPrint(int val)
{
	cout<<val<<" ";
} 
void test_1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);	
	v.push_back(50);	
	v.push_back(20);	
	v.push_back(40);	
	
	//sort 默认从小到大排序 
	sort(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;
	
	//从大到小排序 
	sort(v.begin(),v.end(),greater<int>());
	for_each(v.begin(),v.end(),myPrint);
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
	srand((unsigned int)time(NULL));//随机数种子 
	vector<int> v;
	for(int i=1;i<10;i++){
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	
	//打乱顺序 
	random_shuffle(v.begin(),v.end()); 
	for_each(v.begin(),v.end(),myPrint());
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
	for(int i=1;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+1);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	
	vector<int> vtarget;
	//目标容器需要提前开辟空间 
	vtarget.resize(v1.size()+v2.size());
	//合并 需要两个有序序列 
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vtarget.begin());
	for_each(vtarget.begin(),vtarget.end(),myPrint());
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
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	cout<<"反转前 : "<<endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	cout<<"反转后 : "<<endl;
	reverse(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl; 
}
int main()
{
	test_1();
	return 0;
}
#endif 
