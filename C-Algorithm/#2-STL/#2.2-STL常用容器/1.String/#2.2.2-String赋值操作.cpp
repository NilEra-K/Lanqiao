/******************************************
	本节内容:
	String赋值操作 
1.	//char*类型字符串 赋值给当前的字符串  
	string & operator=(const char* s);
2.	//把字符串s赋给当前的字符串 
	string & operator=(const string & s);
3.	//字符赋值给当前的字符串  
	string & operator=(char c);
4.	//把字符串s赋给当前的字符串  
	string & assign=(const char* s);
5.	//把字符串s赋给当前字符串 
	string & assign=(const char* s,int n);
6.	//把字符串s赋给当前字符串  
	string & assign=(const string & s);
7.	//用n个字符c赋给当前字符串  
	string & assign=(int n,char c);
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	//char*类型字符串 赋值给当前的字符串  
	//string & operator=(const char* s);
	string str1;
	str1="Hello World";
	cout<<"str1 = "<<str1<<endl;
	
	//把字符串s赋给当前的字符串 
	//string & operator=(const string & s);
	string str2;
	str2=str1;
	cout<<"str2 = "<<str2<<endl;
	
	//字符赋值给当前的字符串  
	//string & operator=(char c);
	string str3;
	str3='a';
	cout<<"str3 = "<<str3<<endl;
	
	//把字符串s赋给当前的字符串  
	//string & assign=(const char* s);
	string str4;
	str4.assign("Hello C++");
	cout<<"str4 = "<<str4<<endl;
	
	//把字符串s赋给当前字符串 
	//string & assign=(const char* s,int n);
	string str5;
	str5.assign("Hello C++",5);
	cout<<"str5 = "<<str5<<endl;
	
	//把字符串s赋给当前字符串  
	//string & assign=(const string & s);
	string str6;
	str6.assign(str5);
	cout<<"str6 = "<<str6<<endl;
	
	//用n个字符c赋给当前字符串  
	//string & assign=(int n,char c);
	string str7;
	str7.assign(5,'x');
	cout<<"str7 = "<<str7<<endl;
}
int main()
{
	test_1();
	return 0;
}
#endif
