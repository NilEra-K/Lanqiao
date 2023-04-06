/***********************************************
	本节内容:
	Map&Multimap
	Map&Multimap基本概念
	Map中所有元素都是pair
	pair中第一个元素为key(键值),起到索引作用 
	第二个元素为value(实值)
	**打个比方:
	key键值:是你的QQ号 
	value实值:是你QQ名 
	你的QQ号是不能随意更改的 
	但是你的QQ名是可以随意更改的 
	
	所有元素都会根据元素的键值自动排序 
	
	本质:Map/Multimap属于关联式容器 
	优点:
	可以根据key值快速找到 value值 
	Map&Multimap区别:
	Map不允许容器中有重复的 key值元素
	Multimap允许容器中有重复的 key值元素 
	
	Map容器构造和赋值 
	函数原型:
	map<T1,T2> mp;
	map(const map &mp);
	map& operator=(const map &mp);
	
	Map容器大小和交换 
	函数原型:
	size();
	empty();
	swap(st);
	
	Map容器插入和删除 
	函数原型:
	insert(elem);
	clear();
	erase(pos);
	erase(begin,end);
	erase(key);//删除容器中值为key的函数  
	
	Map容器查找和统计 
	函数原型:
	find();
	count(key); 
	
	Map容器排序  
	函数原型:
	sort();
***********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void PrintMap(map<int,int>& m)
{
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		cout<<"Key = "<<it->first<<" Value = "<<it->second<<endl;
	}
}
void test_1()
{
	map<int,int> m;
	//<键值,实值> 
	m.insert(pair<int,int>(3,20));
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(2,20));
	PrintMap(m);
}
int main()
{
	test_1();
	return 0;
}
#endif
