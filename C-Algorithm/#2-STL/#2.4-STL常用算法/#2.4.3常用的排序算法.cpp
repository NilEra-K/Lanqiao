/*****************************************************
	��������:
	�����㷨--����  
	sort			//��������Ԫ�ؽ������� 
	//��ֵ����Ԫ��
	//�ҵ�����ָ��λ�õ����� 
	//�Ҳ������ؽ���������λ��  
	sort(iterator begin,iterator end,_Pred);
----begin 	��ʼ������ 
----end		���������� 
----_Pred	ν�� 
 
	random_shuffle	//ϴ�� ָ����Χ��Ԫ���ټǵ������� 
	random_shuffleϴ���㷨�Ƚ�ʹ��,ʹ��ʱ�ǵü����������   
	random_shuffle(iterator begin,iterator end);
----begin 	��ʼ������ 
----end		���������� 
	 
	merge			//����Ԫ�غϲ�,���洢����һ������  
	//�������������������  
	merge(iterator begin_1,iterator end_1,iterator begin_2,iterator,end_2,iterator dest);
----begin_1	����1��ʼ������ 
----end_1	����1���������� 
----begin_2	����2��ʼ������ 
----end_2	����2���������� 
----dest	Ŀ��������ʼ������	
	
	reverse			//��תָ����Χ�ڵ�Ԫ�� 
	reverse(iterator begin,iterator end);
----begin	��ʼ������ 
----end		���������� 
 
******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
void myPrint(int val)
{
	cout<<val<<" ";
} 
void test_1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);	
	v.push_back(50);	
	v.push_back(20);	
	v.push_back(40);	
	
	//sort Ĭ�ϴ�С�������� 
	sort(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint);
	cout<<endl;
	
	//�Ӵ�С���� 
	sort(v.begin(),v.end(),greater<int>());
	for_each(v.begin(),v.end(),myPrint);
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
	srand((unsigned int)time(NULL));//��������� 
	vector<int> v;
	for(int i=1;i<10;i++){
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	
	//����˳�� 
	random_shuffle(v.begin(),v.end()); 
	for_each(v.begin(),v.end(),myPrint());
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
	for(int i=1;i<10;i++){
		v1.push_back(i);
		v2.push_back(i+1);
	}
	for_each(v1.begin(),v1.end(),myPrint());
	cout<<endl;
	for_each(v2.begin(),v2.end(),myPrint());
	cout<<endl;
	
	vector<int> vtarget;
	//Ŀ��������Ҫ��ǰ���ٿռ� 
	vtarget.resize(v1.size()+v2.size());
	//�ϲ� ��Ҫ������������ 
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vtarget.begin());
	for_each(vtarget.begin(),vtarget.end(),myPrint());
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
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	cout<<"��תǰ : "<<endl;
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl;
	cout<<"��ת�� : "<<endl;
	reverse(v.begin(),v.end());
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl; 
}
int main()
{
	test_1();
	return 0;
}
#endif 
