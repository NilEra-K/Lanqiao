/**********************************************
	��������:
	Set/Multiset
	
	Set/Multiset��������:
	����Ԫ���ٲ���ʱ�Զ������� 
	����:
	Set/Multiset���ڹ���ʽ����,�ײ�ṹʹ�ö� 
	����ʵ�� 
	
	Set/Multiset����:
	Set���������������ظ���Ԫ��
	Multiset�������������ظ���Ԫ��  
	
	Set/Multiset����͸�ֵ 
	Set�����Ĵ����Լ���ֵ 
	set<T> st;
	set(constt set &st);
	
	set&operator=(const set &st);
	
	Set/Multiset��С�ͽ���
	size();
	empty();  
	swap(st);
	
	Set/Multiset�������ݺ�ɾ������ 
	insert(elem);
	clear();
	erase(pos);//ɾ��pos��������ָ��Ԫ��,������һ��Ԫ�صĵ����� 
	erase(begin,end); //ɾ������[begin,end)�Ķ���Ԫ��,������һ��Ԫ�صĵ�����  
	erase(elem);//ɾ��������ֵΪelem��Ԫ��  
	 
**********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void PrintSet(set<int> &s)
{
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void PrintMultiset(multiset<int> &s)
{
	for(multiset<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
class MyCompare{
public:
	bool operator()(int v1,int v2) const
	{
		return v1>v2;
	}
};
int main()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30); 
	s1.insert(40); 
	s1.insert(10); 
	s1.insert(20); 
	s1.insert(10);
	PrintSet(s1);
	
	multiset<int> s2;
	s2.insert(10);
	s2.insert(30); 
	s2.insert(40); 
	s2.insert(10); 
	s2.insert(20); 
	s2.insert(10);
	PrintMultiset(s2);
	
	s1.erase(s1.begin());
	PrintSet(s1);
	
	s2.erase(s2.begin());
	PrintMultiset(s2);
	s2.clear();
	PrintMultiset(s2);
	
	//Set&Multiset����  
	set<int>::iterator pos=s1.find(30);
	if(pos!=s1.end()){
		cout<<"�ҵ���Ԫ�� : "<<*pos<<endl;
	}else{
		cout<<"δ�ҵ�Ԫ�� : "<<endl;
	}
	//Set&Multisetͳ�� 
	int num=s1.count(30);
	cout<<num<<endl; 
	
/**************************************************
	Pair ���鴴�� 
	����:
	�ɶԳ��ֵ�����,���ö���
	���Է����������� 
	
	���ִ�����ʽ:
	pair<type,type> p (value_1,value_2);
	pair<type,type> p = make_pair(value_1,value_2);
**************************************************/
	pair<string,int> p_1(string("Tom"),20);
	cout<<"���� : "<<p_1.first<<" ���� : "<<p_1.second<<endl; 
	pair<string,int> p_2 = make_pair(string("Jerry"),10);
	cout<<"���� : "<<p_2.first<<" ���� : "<<p_2.second<<endl; 
	
	//���÷º����ı��������  
	set<int,MyCompare> s3;
	s3.insert(10);
	s3.insert(30); 
	s3.insert(40); 
	s3.insert(20); 
	for(set<int,MyCompare>::iterator vit=s3.begin();vit!=s3.end();vit++){
		cout<<*vit<<' ';
	}
	return 0;
}
#endif

