/****************************
	本节内容:
	Vector预留空间 
	函数原型:
	reverve(int len);
	容器预留len个元素长度
	预留位置不初始化
	元素不可访问 
****************************/
#if 1
#include<bits/stdc++.h> 
using namespace std;
void test_1()
{
	vector<int> v;
	
	int num=0;
	int* p=NULL;
	for(int i=0;i<100000;i++){
		v.push_back(i);
		if(p!=&v[0]){
			p=&v[0];
			num++;
		}
	}
}
int main()
{
	test_1(); 
	return 0;
}
#endif
