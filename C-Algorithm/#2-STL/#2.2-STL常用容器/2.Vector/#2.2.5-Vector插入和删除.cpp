/*********************************
	��������:
	vector�����ɾ�� 
	����ԭ��:
	//β������Ԫ��ele 
	push_back(ele);
	//ɾ�����һ��Ԫ��  
	pop_back();
	//������ָ��λ��pos����Ԫ��ele 
	insert(const_iterator pos,ele);
	//������ָ��λ��pos����count��Ԫ��ele 
	insert(const_iterator pos,int count,ele);
	//ɾ��������ָ���Ԫ��  
	erase(const_iterator pos);
	//ɾ����������start��end֮���Ԫ��  
	erase(const_iterator start,const_iterator end);
	//ɾ������������Ԫ�� 
	clear();
*********************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>& v)
{
	vector<int>::iterator it=v.begin();
	for(	;it!=v.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void test_1()
{
	//β��  
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	
	//βɾ 
	v1.pop_back();
	printVector(v1);
	
	//���� 
	v1.insert(v1.begin(),100);
	printVector(v1);
	
	v1.insert(v1.begin(),2,200);
	printVector(v1);
	
	v1.insert(v1.begin()+6,600);
	printVector(v1);
	
	//ɾ�� 
	v1.erase(v1.begin());
	printVector(v1);
	
	//��� 
	v1.erase(v1.begin()+4,v1.end());
	printVector(v1);
	v1.clear();
	printVector(v1); 
} 
int main()
{
	test_1(); 
	return 0;
}
#endif
