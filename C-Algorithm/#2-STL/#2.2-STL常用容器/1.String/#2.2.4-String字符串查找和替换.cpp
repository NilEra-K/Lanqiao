/******************************************
	��������:
	String�ַ������Һ��滻 
	
	����ԭ��:
1.	//����str��һ�γ���λ��,��pos��ʼ����  
	int find(const string& str,int pos=0)const;
2.	//����s��һ������λ��,��pos��ʼ����  
	int find(const char* s.int pos=0)const;
3.	//��posλ�ò���s��ǰn���ַ���һ��λ��  
	int find(const char* s,int pos,int n)const;
4.	//�����ַ�c��һ�γ���λ��  
	int find(const char c,int pos=0)const;

5.	//����str���һ��λ��,��pos��ʼ����  
	int rfind(const string& str,int pos)const;
6.	//����s���һ�γ���λ��,��pos��ʼ���� 
	int rfind(const char* s,int pos=npos)const;
7.	//��pos����s��ǰn���ַ����һ��λ�� 
	int rfind(const char* s,int pos,int n)const;
8.	//�����ַ�c���һ�γ���λ�� 
	int rfind(const char c,int pos=0)const;
	
9.	//�滻��pos��ʼn���ַ���Ϊstr 
	string& replace(int pos,int n,const string& str);
10.	//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s  
	string& replace(int pos,int n,const char* s); 
******************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//����  
void test_1()
{
	string str1="abcdefgde";
	int pos=str1.find("de");
	if(pos==-1){//δ�ҵ�����-1 
		cout<<"δ�ҵ�"<<endl;
	}else{
		cout<<pos<<endl;
	}
	
	pos=str1.rfind("de");
	cout<<pos<<endl;
}
//�滻 
void test_2()
{
	string str1="abcdefgde";
	str1.replace(1,3,"-----");
	cout<<str1<<endl;
} 
int main()
{
	test_1(); 
	test_2();
	return 0;
}
#endif
