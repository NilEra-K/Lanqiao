/****************************
	��������:
	VectorԤ���ռ� 
	����ԭ��:
	reverve(int len);
	����Ԥ��len��Ԫ�س���
	Ԥ��λ�ò���ʼ��
	Ԫ�ز��ɷ��� 
****************************/
#if 1
#include<bits/stdc++.h> 
using namespace std;
void test_1()
{
	vector<int> v;
	
	int num=0;
	int* p=NULL;
	for(int i=0;i<100000;i++){
		v.push_back(i);
		if(p!=&v[0]){
			p=&v[0];
			num++;
		}
	}
}
int main()
{
	test_1(); 
	return 0;
}
#endif
