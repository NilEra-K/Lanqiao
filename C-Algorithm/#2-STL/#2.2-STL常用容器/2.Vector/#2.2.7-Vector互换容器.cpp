/*******************************
	��������:
	Vector�������� 
	����ԭ��:
	//��vec�뱾���Ԫ�ػ���  
	swap(vec); 
*******************************/
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
	cout<<"����ǰ"<<endl;
	vector<int> v1;
	for(int i=1;i<10;i++){
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int> v2;
	for(int i=9;i>=0;i--){
		v2.push_back(i);
	}
	printVector(v2);
	
	cout<<"������"<<endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	/*Ҳ����ʹ��  
	swap(v1,v2);
	printVector(v1);
	printVector(v2);
	*/	
}
void test_2()
{
	vector<int> v;
	for(int i=0;i<100000;i++){
		v.push_back(i);
	}
	
	cout<<"v������ :"<<v.capacity()<<endl;
	cout<<"v�Ĵ�С :"<<v.size()<<endl;
	
	v.resize(3); 
	cout<<"v������ :"<<v.capacity()<<endl;
	cout<<"v�Ĵ�С :"<<v.size()<<endl;
	
	//�����ڴ� 
	cout<<"�ڴ�������---"<<endl; 
	vector<int>(v).swap(v); 
	//vector<int>(v)//��������,�ÿ������쿽����v������,�������н�������Զ��ͷ� 
	//swap(v)		//���� 
	cout<<"v������ :"<<v.capacity()<<endl;
	cout<<"v�Ĵ�С :"<<v.size()<<endl;

}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
