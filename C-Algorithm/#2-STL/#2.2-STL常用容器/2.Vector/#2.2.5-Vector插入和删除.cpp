/*********************************
	本节内容:
	vector插入和删除 
	函数原型:
	//尾部插入元素ele 
	push_back(ele);
	//删除最后一个元素  
	pop_back();
	//迭代器指向位置pos插入元素ele 
	insert(const_iterator pos,ele);
	//迭代器指向位置pos插入count个元素ele 
	insert(const_iterator pos,int count,ele);
	//删除迭代器指向的元素  
	erase(const_iterator pos);
	//删除迭代器从start到end之间的元素  
	erase(const_iterator start,const_iterator end);
	//删除容器中所有元素 
	clear();
*********************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>& v)
{
	vector<int>::iterator it=v.begin();
	for(	;it!=v.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void test_1()
{
	//尾插  
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	
	//尾删 
	v1.pop_back();
	printVector(v1);
	
	//插入 
	v1.insert(v1.begin(),100);
	printVector(v1);
	
	v1.insert(v1.begin(),2,200);
	printVector(v1);
	
	v1.insert(v1.begin()+6,600);
	printVector(v1);
	
	//删除 
	v1.erase(v1.begin());
	printVector(v1);
	
	//清空 
	v1.erase(v1.begin()+4,v1.end());
	printVector(v1);
	v1.clear();
	printVector(v1); 
} 
int main()
{
	test_1(); 
	return 0;
}
#endif
