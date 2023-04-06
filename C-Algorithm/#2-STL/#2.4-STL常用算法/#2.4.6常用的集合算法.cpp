/*****************************************************
	��������:
	�����㷨--�����㷨 
	set_intersection	//�����������Ľ��� 
	//�������ϱ�������������  
	//vTarget���ٿռ�ʱ��Ҫ���Ǵ�����������ȡСֵ 
	//set_intersection����ֵ���ǽ��������һ��Ԫ�ص�λ��  
	set_intersection(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest);
----begin_1		����1��ʼ������	 
----end_1		����1���������� 
----begin_2		����2��ʼ������ 
----end_2		����2���������� 
----dest		Ŀ��������ʼ������ 
	
	set_union			//�����������Ĳ��� 
	//vTarget���ٿռ�ʱ��Ҫ����ȡ��������֮��  
	set_union(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest); 
----begin_1		����1��ʼ������	 
----end_1		����1���������� 
----begin_2		����2��ʼ������ 
----end_2		����2���������� 
----dest		Ŀ��������ʼ������ 

	set_difference		//�����������Ĳ 
	set_difference(iterator begin_1,iterator end_1,iterator begin_2,iterator end_2,iterator dest); 
----begin_1		����1��ʼ������	 
----end_1		����1���������� 
----begin_2		����2��ʼ������ 
----end_2		����2���������� 
----dest		Ŀ��������ʼ������ 
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
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//ȡ���������С��ֵ��Ŀ���������ٿռ� 
	vTarget.resize(min(v1.size(),v2.size()));
	
	//����Ŀ�����������һ��Ԫ�صĵ�������ַ 
	vector<int>::iterator itEnd=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
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
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//vTarget���ٿռ�ʱ��Ҫ����ȡ��������֮��  
	vTarget.resize(v1.size()+v2.size());
	
	//����Ŀ�����������һ��Ԫ�صĵ�������ַ 
	vector<int>::iterator itEnd=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
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
	vector<int> v2;
	for(int i=0;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	vector<int> vTarget;
	//ȡ��������ϴ��ֵ��Ŀ���������ٿռ� 
	vTarget.resize(max(v1.size(),v2.size()));
	
	//����Ŀ�����������һ��Ԫ�صĵ�������ַ 
	vector<int>::iterator itEnd=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin()); 
	for_each(vTarget.begin(),itEnd,myPrint());
	cout<<endl;
}	
int main()
{
	test_1();
	return 0;
} 
#endif
