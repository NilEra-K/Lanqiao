/******************************************
	��������:
	String�ַ��������ɾ�� 
	
	����ԭ��:
1.	//�����ַ���  
	string& insert(int pos,const char* s); 
2.	//�����ַ���  
	string& insert(int pos,const string str); 
3.	//��ָ��λ�ò���n���ַ�c  
	string& insert(int pos,int n,char c); 
4.	//ɾ����Pos��ʼ��n���ַ�  
	string& erase(int pos,int n=npos); 
	
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	string str="hello";
	//����  
	str.insert(1,"---");
	cout<<str<<endl;
	//ɾ��  
	str.erase(1,3);
	cout<<str<<endl;	 
}

int main()
{
	test_1();
	return 0;
}
#endif
