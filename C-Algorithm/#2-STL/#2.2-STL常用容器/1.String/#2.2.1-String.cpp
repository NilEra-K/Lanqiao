/******************************************
	��������:
	STL��������--string
	string�ı�����һ���� 
	
	string��char*������:
	-char*��һ��ָ�� 
	-string��һ����,���ڲ���װ��char*,���� 
	����ַ���,��һ��char* �͵����� 

	�ص�:
	string���ڲ���װ������Ա���� 
	����:
	����--find
	����--copy
	ɾ��--delete 
	�滻--replace
	����--insert 
	
	string����char*��������ڴ�,���õ��ĸ� 
	ֵԽ���ȡֵԽ���,�����ڲ����и���  
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//string ���캯�� 
/*
���캯��ԭ��:
--string();//����һ���յ��ַ��� 
����:
string str; 
string(const char* s);//ʹ���ַ���s��ʼ�� 
--string(const string& str);//ʹ��һ��string�����ʼ����һ��string����  
--string(int n,char c);//ʹ��n���ַ�c��ʼ�� 

*�ܽ�:string�Ķ��ֹ��췽ʽû�пɱ���,���ʹ�ü���  
*/ 

void test_1()
{
	string s1;//�����˿��ַ���,�����޲ι��캯��  
	cout<<"str1 ="<<s1<<endl;
	
	const char* str="Hello World";
	string s2(str);//��c_string ת������string 
	//��c���Ե�char*����ת����C++��string����  
	cout<<"str2 ="<<s2<<endl;
	
	string s3(s2);//���ÿ������캯��  
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
