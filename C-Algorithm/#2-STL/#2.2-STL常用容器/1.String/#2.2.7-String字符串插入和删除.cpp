/******************************************
	本节内容:
	String字符串插入和删除 
	
	函数原型:
1.	//插入字符串  
	string& insert(int pos,const char* s); 
2.	//插入字符串  
	string& insert(int pos,const string str); 
3.	//再指定位置插入n个字符c  
	string& insert(int pos,int n,char c); 
4.	//删除从Pos开始的n给字符  
	string& erase(int pos,int n=npos); 
	
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str="hello";
	//插入  
	str.insert(1,"---");
	cout<<str<<endl;
	//删除  
	str.erase(1,3);
	cout<<str<<endl;	 
}

int main()
{
	test_1();
	return 0;
}
#endif
