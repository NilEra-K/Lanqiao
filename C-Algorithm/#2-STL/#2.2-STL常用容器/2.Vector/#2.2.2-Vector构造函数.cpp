/************************************************
	��������:
	Vector ���캯�� 
	
	����ԭ��:
1.	//����ģ����ʵ��,Ĭ�Ϲ��캯��  
	vector<T> v;
2.	//��v((begin(),end())�����е�Ԫ�ؿ��������� 
	vector(v.begin(),v.end());
3.	//���캯����n��elem����������  
	vector(n,elem);
4.	//�������캯�� 
	vector(const vector &vec); 
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
	vector<int> v1;//�޲ι��� 
	for(int i=0;i<10;i++){
		v1.push_back(i);
	} 
	printVector(v1);
	
	vector<int> v2(v1.begin(),v1.end());
	printVector(v2);
	
	vector<int> v3(10,100);
	printVector(v3);
	
	vector<int> v4(v3);
	printVector(v4);
}
int main()
{
	test_1();
	return 0;
}
#endif
