/************************************************
	��������:
	Vector�����ʹ�С 
	����ԭ��:
1.	//�ж������Ƿ�Ϊ��  
	empty();
2.	//���������� 
	capacity();
3.	//����������Ԫ�صĸ��� 
	size();
4.	//����ָ�������ĳ���num
	//�������䳤,����Ĭ��ֵ�����λ�� 
	//���������,��ĩβ�����������ȵ�Ԫ�ر�ɾ��  
	resize(int num);
5.	//����ָ�������ĳ���num
	//�������䳤,����elemֵ�����λ�� 
	//���������,��ĩβ�����������ȵ�Ԫ�ر�ɾ�� 
	resize(int num,elem); 
************************************************/
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
	printVector(v1);
	
	if(v1.empty()){
		cout<<"v1 is empty"<<endl;
	}else{
		cout<<"v1 is not empty"<<endl;
		cout<<"v1������ :"<<v1.capacity()<<endl;;
		cout<<"v1�Ĵ�С :"<<v1.size()<<endl;
	}
	
	v1.resize(15,10);
	printVector(v1);
	
	v1.resize(5);
	printVector(v1);
}
int main()
{
	test_1();
	return 0;
}
#endif
