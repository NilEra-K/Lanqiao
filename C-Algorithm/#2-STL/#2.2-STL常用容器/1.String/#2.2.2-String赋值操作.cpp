/******************************************
	��������:
	String��ֵ���� 
1.	//char*�����ַ��� ��ֵ����ǰ���ַ���  
	string & operator=(const char* s);
2.	//���ַ���s������ǰ���ַ��� 
	string & operator=(const string & s);
3.	//�ַ���ֵ����ǰ���ַ���  
	string & operator=(char c);
4.	//���ַ���s������ǰ���ַ���  
	string & assign=(const char* s);
5.	//���ַ���s������ǰ�ַ��� 
	string & assign=(const char* s,int n);
6.	//���ַ���s������ǰ�ַ���  
	string & assign=(const string & s);
7.	//��n���ַ�c������ǰ�ַ���  
	string & assign=(int n,char c);
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	//char*�����ַ��� ��ֵ����ǰ���ַ���  
	//string & operator=(const char* s);
	string str1;
	str1="Hello World";
	cout<<"str1 = "<<str1<<endl;
	
	//���ַ���s������ǰ���ַ��� 
	//string & operator=(const string & s);
	string str2;
	str2=str1;
	cout<<"str2 = "<<str2<<endl;
	
	//�ַ���ֵ����ǰ���ַ���  
	//string & operator=(char c);
	string str3;
	str3='a';
	cout<<"str3 = "<<str3<<endl;
	
	//���ַ���s������ǰ���ַ���  
	//string & assign=(const char* s);
	string str4;
	str4.assign("Hello C++");
	cout<<"str4 = "<<str4<<endl;
	
	//���ַ���s������ǰ�ַ��� 
	//string & assign=(const char* s,int n);
	string str5;
	str5.assign("Hello C++",5);
	cout<<"str5 = "<<str5<<endl;
	
	//���ַ���s������ǰ�ַ���  
	//string & assign=(const string & s);
	string str6;
	str6.assign(str5);
	cout<<"str6 = "<<str6<<endl;
	
	//��n���ַ�c������ǰ�ַ���  
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
