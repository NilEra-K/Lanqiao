/******************************************
	本节内容:
	String字符串的比较 
----比较方式:
	字符串比较是按照字符的ASCII码进行对比 
	= 返回  0
	> 返回  1 
	< 返回 -1
	
----函数原型:
1.	//与字符串s比较 
	int compare(const string& s)const;
2.	//与字符串s比较  
	int compare(const char* s)const; 

******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str1 ="hello";
	string str2 ="aello";
	string str3 ="hel";
	int ret=str1.compare(str2);
	
	//ret=str1.compare(str2);
	if(ret==0){
		cout<<"str1 等于 str2"<<endl;
	}else if(ret>0){
		cout<<"str1 大于 str2"<<endl;
	}else{
		cout<<"str1 小于 str2"<<endl;
	}
}
int main()
{
	test_1();
	return 0;
}
#endif
