/*************************************************
	��������:
	�����㷨--����  
	�㷨��ͷ�ļ� 
	#include<algorithm> 
	#include<functional> 
	#include<numeric> 
	��� 

	<algorithm> 
	����ͷ�ļ�������һ��
	��Χ�漰���Ƚ�,����,����,����,����,�޸�... 
	<numeric> 
	�����С
	ֻ��������������������м���ѧ�����ģ�庯�� 
	<functional> 
	������һЩģ����,���������������� 
	 
	 
	�����㷨:
	for_each	//�������� 
	for_each(iterator begin,iterator end,_func);
----begin	��ʼ������ 
----end		���������� 
----_func	�������ߺ������� 
	
	transform	//������������һ�������� 
	***ע��:Ŀ��������Ҫ��ǰ���ٿռ�,�����޷���������  
	transform(iterator begin_1,iterator end_1,iterator beg_2,_func);
----begin_1		Դ������ʼ������ 
----end_1		Դ�������������� 
----begin_2		Ŀ��������ʼ������  
----_func		�������ߺ�������  
*************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//��ͨ���� 
void print_1(int val)
{
	cout<<val<<' ';
}
//�������� 
class print_2
{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
//for_each�㷨�����÷� 
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	//�����㷨 
	for_each(v.begin(),v.end(),print_1);
	cout<<endl; 
	for_each(v.begin(),v.end(),print_2()); 
	cout<<endl; 
} 
int main()
{
	test_1();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
//transform
class TransForm{
public:
	int operator()(int val)
	{
		return val;
	}
};
class MyPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
	vector<int> vTarget;//Ŀ������ 
	vTarget.resize(v.size());//Ŀ��������Ҫ��ǰ���ٿռ� 
	transform(v.begin(),v.end(),vTarget.begin(),TransForm()) ;
	for_each(vTarget.begin(),vTarget.end(),MyPrint()); 
	
}
int main()
{
	test_1();
	return 0;
}
#endif
