/******************************
	��������:
	��ʶ-����VECTOR���������� 
******************************/
#if 1
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void MyPrint(int val)
{
	cout<<val<<endl;
}
void test_1()
{
	//����һ��VECTOR����,����ͨ��ģ�����ָ�������д�����ݵ�����  
	vector<int> v;
	//�������з�����
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//ÿһ�����������Լ��ĵ�����,���������������������е�Ԫ�� 
	//v.begin() ���ص�����,���������ָ�������еĵ�һ��Ԫ�� 
	//v.end() 	���ص�����,���������ָ�����������һ��Ԫ�ص���һ��λ�� 
	//vector<int>::iterator �õ�vector<int>���������ĵ��������� 
	
	vector<int>::iterator pBegin=v.begin();
	vector<int>::iterator pEnd=v.end();
	
	//��һ�ֱ�����ʽ:
	while(pBegin!=pEnd){
		cout<<*pBegin<<endl;
		pBegin++;
	}
	//�ڶ��ֱ�����ʽ:
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<< *it <<' ';
		//����: *it��������������ͺ�<>�ڵ�����������ͬ 
		//e.g.�˴���(*it)��int����  
	} 
	cout<<endl;
	//�����ֱ�����ʽ:
	//ʹ��STL�ṩ��׼�����㷨 ͷ�ļ�  algorithm
	for_each(v.begin(),v.end(),MyPrint);
}
int main()
{
	test_1();
	return 0;
}
#endif 
