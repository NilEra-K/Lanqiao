/******************************************
	��������:
	String�ַ����ıȽ� 
----�ȽϷ�ʽ:
	�ַ����Ƚ��ǰ����ַ���ASCII����жԱ� 
	= ����  0
	> ����  1 
	< ���� -1
	
----����ԭ��:
1.	//���ַ���s�Ƚ� 
	int compare(const string& s)const;
2.	//���ַ���s�Ƚ�  
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
		cout<<"str1 ���� str2"<<endl;
	}else if(ret>0){
		cout<<"str1 ���� str2"<<endl;
	}else{
		cout<<"str1 С�� str2"<<endl;
	}
}
int main()
{
	test_1();
	return 0;
}
#endif
