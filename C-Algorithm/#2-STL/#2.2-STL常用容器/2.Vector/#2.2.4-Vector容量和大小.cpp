/************************************************
	本节内容:
	Vector容量和大小 
	函数原型:
1.	//判断容器是否为空  
	empty();
2.	//容器的容量 
	capacity();
3.	//返回容器中元素的个数 
	size();
4.	//重新指定容器的长度num
	//若容器变长,则以默认值填充新位置 
	//若容器变短,则末尾超出容器长度的元素被删除  
	resize(int num);
5.	//重新指定容器的长度num
	//若容器变长,则以elem值填充新位置 
	//若容器变短,则末尾超出容器长度的元素被删除 
	resize(int num,elem); 
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
	vector<int> v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	} 
	printVector(v1);
	
	if(v1.empty()){
		cout<<"v1 is empty"<<endl;
	}else{
		cout<<"v1 is not empty"<<endl;
		cout<<"v1的容量 :"<<v1.capacity()<<endl;;
		cout<<"v1的大小 :"<<v1.size()<<endl;
	}
	
	v1.resize(15,10);
	printVector(v1);
	
	v1.resize(5);
	printVector(v1);
}
int main()
{
	test_1();
	return 0;
}
#endif
