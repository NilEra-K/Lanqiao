/*****************************************************
	��������:
	�����㷨--�������滻�㷨 
	copy		//������ָ����Χ��Ԫ�ؿ�������һ������ 
	//����copy�㷨�ڿ���ʱ,Ŀ�������ǵ���ǰ���ٿռ�  
	copy(iterator begin,iterator end,iterator dest);
----begin	��ʼ������  
----end		����������  
----dest	Ŀ����ʼ������ 
	
	replace		//������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ�� 
	replace(iterator begin,iterator end,oldvalue,newvalue);
----begin	��ʼ������  
----end		����������  
----oldvalue��Ԫ��  
----newvalue��Ԫ�� 

	replace_if	//������ָ����Χ������������Ԫ���滻Ϊ��Ԫ�� 
	replace_if(iterator begin,iterator end,_Pred,newvalue);
----begin	��ʼ������  
----end		����������  
----_Pred	ν��  
----newvalue�滻����Ԫ��  
	
	swap 		//��������������Ԫ�� 
	//��������ʾ 
	swap(container c1,container c2);
----container���� 
----c1	����_1  
----c2	����_2  
******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
}; 
void test_1()
{
	vector<int> v1;
	for(int i=0;i<10;i++){
		v1.push_back(i+1);
	}
	vector<int> v2;
	v2.resize(v1.size()); 
	copy(v1.begin(),v1.end(),v2.begin());
	
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
}; 
void test_1()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	
	cout<<"�滻ǰ : "<< endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	//�������е�20�滻Ϊ2000  
	cout<<"�滻�� : "<< endl;
	replace(v.begin(),v.end(),20,2000);
	 
	for_each(v.begin(),v.end(),myPrint());
	cout<< endl;
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
class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
class ReplaceGreater30{
public:
	bool operator()(int val)
	{
		return val>=30;
	}
}; 

void test_1()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	
	cout<<"�滻ǰ : "<< endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	//�������д��ڵ��ڵ�30 �滻�� 3000   
	cout<<"�滻�� : "<< endl;
	replace_if(v.begin(),v.end(),ReplaceGreater30(),3000);
	for_each(v.begin(),v.end(),myPrint());
	cout<< endl;
}
int main()
{
	test_1();
	return 0;
}
#endif

