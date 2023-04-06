/******************************
	本节内容:
	初识-感受VECTOR容器的魅力 
******************************/
#if 1
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void MyPrint(int val)
{
	cout<<val<<endl;
}
void test_1()
{
	//创建一个VECTOR容器,并且通过模板参数指定容器中存放数据的类型  
	vector<int> v;
	//向容器中放数据
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//每一个容器都有自己的迭代器,迭代器是用来遍历容器中的元素 
	//v.begin() 返回迭代器,这个迭代器指向容器中的第一个元素 
	//v.end() 	返回迭代器,这个迭代器指向容器中最后一个元素的下一个位置 
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型 
	
	vector<int>::iterator pBegin=v.begin();
	vector<int>::iterator pEnd=v.end();
	
	//第一种遍历方式:
	while(pBegin!=pEnd){
		cout<<*pBegin<<endl;
		pBegin++;
	}
	//第二种遍历方式:
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<< *it <<' ';
		//技巧: *it解出来的数据类型和<>内的数据类型相同 
		//e.g.此处的(*it)是int类型  
	} 
	cout<<endl;
	//第三种遍历方式:
	//使用STL提供标准遍历算法 头文件  algorithm
	for_each(v.begin(),v.end(),MyPrint);
}
int main()
{
	test_1();
	return 0;
}
#endif 
