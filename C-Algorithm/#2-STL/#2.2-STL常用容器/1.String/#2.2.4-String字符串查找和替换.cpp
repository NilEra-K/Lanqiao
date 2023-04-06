/******************************************
	本节内容:
	String字符串查找和替换 
	
	函数原型:
1.	//查找str第一次出现位置,从pos开始查找  
	int find(const string& str,int pos=0)const;
2.	//查找s第一场出现位置,从pos开始查找  
	int find(const char* s.int pos=0)const;
3.	//从pos位置查找s的前n个字符第一次位置  
	int find(const char* s,int pos,int n)const;
4.	//查找字符c第一次出现位置  
	int find(const char c,int pos=0)const;

5.	//查找str最后一次位置,从pos开始查找  
	int rfind(const string& str,int pos)const;
6.	//查找s最后一次出现位置,从pos开始查找 
	int rfind(const char* s,int pos=npos)const;
7.	//从pos查找s的前n给字符最后一次位置 
	int rfind(const char* s,int pos,int n)const;
8.	//查找字符c最后一次出现位置 
	int rfind(const char c,int pos=0)const;
	
9.	//替换从pos开始n个字符串为str 
	string& replace(int pos,int n,const string& str);
10.	//替换从pos开始的n个字符为字符串s  
	string& replace(int pos,int n,const char* s); 
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//查找  
void test_1()
{
	string str1="abcdefgde";
	int pos=str1.find("de");
	if(pos==-1){//未找到返回-1 
		cout<<"未找到"<<endl;
	}else{
		cout<<pos<<endl;
	}
	
	pos=str1.rfind("de");
	cout<<pos<<endl;
}
//替换 
void test_2()
{
	string str1="abcdefgde";
	str1.replace(1,3,"-----");
	cout<<str1<<endl;
} 
int main()
{
	test_1(); 
	test_2();
	return 0;
}
#endif
