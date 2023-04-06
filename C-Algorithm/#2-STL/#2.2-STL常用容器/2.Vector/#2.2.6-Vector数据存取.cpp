/********************************
	本节内容:
	函数原型:
1.	//返回索引idx所指的数据 	
	at(int idx);
2.	//返回索引idx所指的数据  
	operator[];
3.	//返回容器中第一个数据元素  
	front();
4.	//返回容器中最后一个数据元素  
	back(); 
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
	vector<int> v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	//输出方式1. 
	for(int i=0;i<10;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	//输出方式2. 
	for(int i=0;i<10;i++){
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"v1的第一个元素   : "<<v1.front()<<endl;
	cout<<"v1的最后一个元素 : "<<v1.back()<<endl;
	 

} 
int main()
{
	test_1();
	return 0;
}
#endif
