/********************************
	��������:
	����ԭ��:
1.	//��������idx��ָ������ 	
	at(int idx);
2.	//��������idx��ָ������  
	operator[];
3.	//���������е�һ������Ԫ��  
	front();
4.	//�������������һ������Ԫ��  
	back(); 
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
	vector<int> v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	//�����ʽ1. 
	for(int i=0;i<10;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	//�����ʽ2. 
	for(int i=0;i<10;i++){
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"v1�ĵ�һ��Ԫ��   : "<<v1.front()<<endl;
	cout<<"v1�����һ��Ԫ�� : "<<v1.back()<<endl;
	 

} 
int main()
{
	test_1();
	return 0;
}
#endif
