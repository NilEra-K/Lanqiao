/******************************************
	本节内容:
	String字符存取 
	String中单个字符存取方式有两种: 
1.	//通过[]方式取字符  
	char& operator[](int n);
2.	//通过at方式取字符  
	char& at(int n);
	
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str="Hello World";
	
	cout<<str[2]<<endl;
	cout<<str.at(4)<<endl; 
}

int main()
{
	test_1();
	return 0;
}
#endif
