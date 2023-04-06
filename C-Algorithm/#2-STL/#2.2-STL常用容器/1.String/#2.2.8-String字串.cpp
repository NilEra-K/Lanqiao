/******************************************
	本节内容:
	String子串 
	从字符串中获得想要的子串  
	
	函数原型:
	//返回由pos开始的n个字符组成的字符串  
	string substr(int pos=0,int n = npos)const;
	
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str="abcdefg";
	string subStr=str.substr(1,3); 
	cout<<subStr<<endl;
	
	string email="hello@163.com";
	int pos=email.find("@");
	string username=email.substr(0,pos);
	cout<<username<<endl;
}

int main()
{
	test_1();
	return 0;
}
#endif
