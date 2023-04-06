/******************************************
	本节内容:
	STL常用容器--string
	string的本质是一个类 
	
	string和char*的区别:
	-char*是一个指针 
	-string是一个类,类内部封装了char*,管理 
	这个字符串,是一个char* 型的容器 

	特点:
	string类内部封装了许多成员方法 
	例如:
	查找--find
	拷贝--copy
	删除--delete 
	替换--replace
	插入--insert 
	
	string管理char*所分配的内存,不用担心赋 
	值越界和取值越界等,由类内部进行负责  
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//string 构造函数 
/*
构造函数原型:
--string();//创建一个空的字符串 
例如:
string str; 
string(const char* s);//使用字符串s初始化 
--string(const string& str);//使用一个string对象初始化另一个string对象  
--string(int n,char c);//使用n个字符c初始化 

*总结:string的多种构造方式没有可比性,灵活使用即可  
*/ 

void test_1()
{
	string s1;//创建了空字符串,调用无参构造函数  
	cout<<"str1 ="<<s1<<endl;
	
	const char* str="Hello World";
	string s2(str);//把c_string 转换成了string 
	//把c语言的char*类型转化成C++的string类型  
	cout<<"str2 ="<<s2<<endl;
	
	string s3(s2);//调用拷贝构造函数  
	cout<<"str3 ="<<s3<<endl;
	
	string s4(10,'a');
	cout<<"str4 ="<<s4<<endl;
}
int main()
{
	test_1();
	return 0;
}
#endif
