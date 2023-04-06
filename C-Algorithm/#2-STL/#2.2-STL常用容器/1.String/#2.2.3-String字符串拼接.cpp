/******************************************
	本节内容:
	String字符串拼接   
1.	//重载 +=操作符  
	string & operator+=(const char* s);
2.	//重载 +=操作符 
	string & operator+=(const char c);
3.	//重载 +=操作符 
	string & operator+=(const string& str);
4.	//把字符串s连接到当前字符串结尾  
	string & append=(const char* s);
5.	//把字符串s的前n个字符连接到当前字符串结尾 
	string & append=(const char* s,int n);
6.	//同operator+=(const string& str); 
	string & append=(const string & s);
7.	//字符串s中从pos开始的n个字符连接到字符串结尾  
	string & append=(const string &s,int pos,int n);
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str1="我";
	str1+="爱打代码";
	cout<<str1<<endl;
	
	string str2="C C++";
	str1+=str2;
	cout<<str1<<endl;
	
	string str3="I";
	str3.append(" love ");
	str3.append("code abcd",4);
	cout<<str3<<endl;
	str3.append(str2,2,3);
	cout<<str3<<endl;
	
}
int main()
{
	test_1();
	return 0;
}
#endif
