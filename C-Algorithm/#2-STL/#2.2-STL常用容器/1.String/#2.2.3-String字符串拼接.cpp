/******************************************
	��������:
	String�ַ���ƴ��   
1.	//���� +=������  
	string & operator+=(const char* s);
2.	//���� +=������ 
	string & operator+=(const char c);
3.	//���� +=������ 
	string & operator+=(const string& str);
4.	//���ַ���s���ӵ���ǰ�ַ�����β  
	string & append=(const char* s);
5.	//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β 
	string & append=(const char* s,int n);
6.	//ͬoperator+=(const string& str); 
	string & append=(const string & s);
7.	//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β  
	string & append=(const string &s,int pos,int n);
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str1="��";
	str1+="�������";
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
