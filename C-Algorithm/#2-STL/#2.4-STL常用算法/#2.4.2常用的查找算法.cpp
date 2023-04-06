/*****************************************************
	��������:
	�����㷨--���� 
	find			//����Ԫ��  
	//�ҵ�����ָ��λ�õ�����,�Ҳ������ؽ��������� 
	find(iterator beg,iterator end,value);
----begin	��ʼ������ 
----end		���������� 
----value	���ҵ�Ԫ�� 
	
	find_if 		//����������Ԫ��  
	//�ҵ�����ָ��λ�õ�����,�Ҳ������ؽ��������� 
	find_if(iterator begin,iterator end,_Pred);
----begin	��ʼ������ 
----end		���������� 
----_Pred	��������ν��(����bool���͵ķº���)  

	adjacent_find	//���������ظ�Ԫ��  
	//���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����  
	adjacent_find(iterator begin,iterator end);
----begin	��ʼ������	
----end		���������� 
 
	binary_serach	//���ֲ��ҷ�  
	//����ָ��Ԫ��,�ҵ�����true,���򷵻�false 
	//�����������в�����  
	binary_serach(iterator begin,iterator end,value);  
----begin	��ʼ������ 
----end		���������� 
----value	���ҵ�Ԫ�� 

	count			//ͳ��Ԫ�ظ���  
	//ͳ���Զ����������͵�ʱ��,��Ҫ�������operator== 
	count(iterator begin,iterator end,value);
----begin	��ʼ������ 
----end		���������� 
----value	ͳ�Ƶ�Ԫ�� 

	count_if 		//������ͳ��Ԫ�ظ��� 
	count_if(iterator begin,iterator end,_Pred);
----begin	��ʼ������ 
----end		���������� 
----_Pred	ͳ�Ƶ�Ԫ�� 
	 
******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//find���԰���_1 
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i+1);

	}
	vector<int>::iterator it=find(v.begin(),v.end(),5);
	if(it==v.end()){
		cout<<"û���ҵ�!"<<endl; 
	}else{
		cout<<"�ҵ� : "<< *it<<endl;
	}
} 
//find���԰���_2 
class Person{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	bool operator==(const Person p)
	{
		if(this->m_Name==p.m_Name&&this->m_Age==p.m_Age){
			return true;
		}else{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test_2()
{
	vector<Person> v;
	
	Person p1("aaa",10);	v.push_back(p1);
	Person p2("bbb",20);	v.push_back(p2);
	Person p3("ccc",30);	v.push_back(p3);
	Person p4("ddd",40);	v.push_back(p4);
	vector<Person>::iterator it=find(v.begin(),v.end(),p2);
	if(it==v.end()){
		cout<<"û���ҵ�!"<<endl;
	}else{
		cout<<"�ҵ�����:"<<it->m_Name<<" ����: "<<it->m_Age<<endl; 
	}
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
class GreaterFive{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
void test_1(){
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i+1);
	}
	vector<int>::iterator it=find_if(v.begin(),v.end(),GreaterFive());
	if(it ==v.end()){
		cout<<"û���ҵ�!"<<endl; 
	}else{
		cout<<"�ҵ�����5������ : "<<*it<<endl; 
	}
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
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);
	
	//���������ظ�Ԫ�� 
	vector<int>::iterator it=adjacent_find(v.begin(),v.end());
	if(it ==v.end()){
		cout<<"�Ҳ���!"<<endl;
	}else{
		cout<<"�ҵ������ظ�Ԫ��Ϊ :"<<*it<<endl;
	}
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
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	//���ֲ��� 
	bool ret=binary_search(v.begin(),v.end(),2);
	if(ret){
		cout<<"�ҵ���!"<<endl;
	}else{
		cout<<"δ�ҵ�!"<<endl;
	}
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
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num=count(v.begin(),v.end(),4);
	cout<<"4�ĸ���Ϊ:"<<num<<endl;
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
class Greater4{
public:
	bool operator()(int val)
	{
		return val>=4;
	}
};
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num=count_if(v.begin(),v.end(),Greater4());
	cout<<"����4�ĸ���Ϊ : "<<num<<endl;
}
int main()
{
	test_1();
	return 0;
}
#endif
