/**********************************************
	本节内容:
	Set/Multiset
	
	Set/Multiset基本概念:
	所有元素再插入时自动被排序 
	本质:
	Set/Multiset属于关联式容器,底层结构使用二 
	叉树实现 
	
	Set/Multiset区别:
	Set不允许容器中有重复的元素
	Multiset允许容器中有重复的元素  
	
	Set/Multiset构造和赋值 
	Set容器的创建以及赋值 
	set<T> st;
	set(constt set &st);
	
	set&operator=(const set &st);
	
	Set/Multiset大小和交换
	size();
	empty();  
	swap(st);
	
	Set/Multiset插入数据和删除数据 
	insert(elem);
	clear();
	erase(pos);//删除pos迭代器所指的元素,返回下一个元素的迭代器 
	erase(begin,end); //删除区间[begin,end)的多有元素,返回下一个元素的迭代器  
	erase(elem);//删除容器中值为elem的元素  
	 
**********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void PrintSet(set<int> &s)
{
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void PrintMultiset(multiset<int> &s)
{
	for(multiset<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
class MyCompare{
public:
	bool operator()(int v1,int v2) const
	{
		return v1>v2;
	}
};
int main()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30); 
	s1.insert(40); 
	s1.insert(10); 
	s1.insert(20); 
	s1.insert(10);
	PrintSet(s1);
	
	multiset<int> s2;
	s2.insert(10);
	s2.insert(30); 
	s2.insert(40); 
	s2.insert(10); 
	s2.insert(20); 
	s2.insert(10);
	PrintMultiset(s2);
	
	s1.erase(s1.begin());
	PrintSet(s1);
	
	s2.erase(s2.begin());
	PrintMultiset(s2);
	s2.clear();
	PrintMultiset(s2);
	
	//Set&Multiset查找  
	set<int>::iterator pos=s1.find(30);
	if(pos!=s1.end()){
		cout<<"找到了元素 : "<<*pos<<endl;
	}else{
		cout<<"未找到元素 : "<<endl;
	}
	//Set&Multiset统计 
	int num=s1.count(30);
	cout<<num<<endl; 
	
/**************************************************
	Pair 对组创建 
	功能:
	成对出现的数据,利用对组
	可以返沪两个数据 
	
	两种创建方式:
	pair<type,type> p (value_1,value_2);
	pair<type,type> p = make_pair(value_1,value_2);
**************************************************/
	pair<string,int> p_1(string("Tom"),20);
	cout<<"姓名 : "<<p_1.first<<" 年龄 : "<<p_1.second<<endl; 
	pair<string,int> p_2 = make_pair(string("Jerry"),10);
	cout<<"姓名 : "<<p_2.first<<" 年龄 : "<<p_2.second<<endl; 
	
	//运用仿函数改变排序规则  
	set<int,MyCompare> s3;
	s3.insert(10);
	s3.insert(30); 
	s3.insert(40); 
	s3.insert(20); 
	for(set<int,MyCompare>::iterator vit=s3.begin();vit!=s3.end();vit++){
		cout<<*vit<<' ';
	}
	return 0;
}
#endif

