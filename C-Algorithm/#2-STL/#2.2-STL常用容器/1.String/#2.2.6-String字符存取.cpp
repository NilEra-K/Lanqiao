/******************************************
	��������:
	String�ַ���ȡ 
	String�е����ַ���ȡ��ʽ������: 
1.	//ͨ��[]��ʽȡ�ַ�  
	char& operator[](int n);
2.	//ͨ��at��ʽȡ�ַ�  
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
