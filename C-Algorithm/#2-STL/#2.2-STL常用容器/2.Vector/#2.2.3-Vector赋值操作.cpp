/************************************************
	��������:
	Vector ��ֵ���� 
	
	����ԭ��:
1.	//���صȺŲ����� 
	vector& operator=(const vector &vec); 
2.	//��[beg,end]�����е����ݿ�����ֵ������  
	assign(beg,end);
3.	//��n��elem������ֵ������  
	assign(n,elem);
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
	
	vector<int> v2;
	v2=v1;
	printVector(v2);
	
	vector<int> v3;
	v3.assign(v1.begin(),v1.end());
	printVector(v3);
	
	vector<int> v4;
	v4.assign(10,200);
	printVector(v4);
	cout<<endl;
	 
}
int main()
{
	test_1();
	return 0;
}
#endif
