/************************************************
	本节内容:
	Vector 构造函数 
	
	函数原型:
1.	//采用模板类实现,默认构造函数  
	vector<T> v;
2.	//将v((begin(),end())区间中的元素拷贝给本身 
	vector(v.begin(),v.end());
3.	//构造函数将n个elem拷贝给本身  
	vector(n,elem);
4.	//拷贝构造函数 
	vector(const vector &vec); 
************************************************/
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
	vector<int> v1;//无参构造 
	for(int i=0;i<10;i++){
		v1.push_back(i);
	} 
	printVector(v1);
	
	vector<int> v2(v1.begin(),v1.end());
	printVector(v2);
	
	vector<int> v3(10,100);
	printVector(v3);
	
	vector<int> v4(v3);
	printVector(v4);
}
int main()
{
	test_1();
	return 0;
}
#endif
