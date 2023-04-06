/******************************************************
	本节内容:
	Deque 
	功能:双端数组,可以对头端进行
	插入删除操作 
	
	Deque与Vector的区别:
	Vector对于头部的插入删除效率低 数据量越大效率越低 
	Deque相对而言,对头部的插入删除速度会比Vector快
	Vector访问元素时候的速度会比Deque快,这和两者的内部 
	是实现有关  	
-------------------------------------------------------		
	Deque容器构造 
	函数原型: 
	deque<T> deqT;
	deque(begin,end);
	deque(n,elem);
	deque(const deque &deq);
-------------------------------------------------------	
	Deque容器赋值 
	函数原型: 
	deque& operator=(const deque &deq);
	assign(begin,end);
	assign(n,elem);
-------------------------------------------------------		 
	Deque容器大小操作 
	函数原型: 
	deque.empty();
	deque.size();
	deque.resize(num);
	deque.resize(num,elem);
-------------------------------------------------------	
	Deque插入和删除  
	函数原型: 
	push_back(elem);
	push_front(elem);
	pop_back();
	pop_front(); 
	
	指定位置操作:
	insert(pos,elem); 
-------------------------------------------------------	
	Deque数据存取  
	函数原型: 
	at(int idx);
	operator[];
	front();//返回第一个数据据元素 
	back();	//返回最后一个数据据元素 
-------------------------------------------------------	
	Deque排序  
	函数原型: 
	sort(iterator beg,iterator end);
	
******************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void printDeque(const deque<int>& d)
{//形参加入const修饰,迭代器也要加入const修饰  
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
} 
void test_1()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	
	d.push_front(100);
	d.push_front(200);
	printDeque(d);
	sort(d.begin(),d.end());
	printDeque(d);
}
int main()
{
	test_1();
	return 0;
}
#endif
