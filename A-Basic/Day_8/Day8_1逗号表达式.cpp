/****************************
	��������:
	���ű��ʽ���ڴ����ģ�� 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//������ֻ���������֮�� 
	double num_1=0,num_2=0;
	//���ö��ű��ʽ��д�� 
	while(true){
		cin>>num_1>>num_2;
		if(num_1==0&&num_2==0)	break;
		cout<<(num_1-num_2)/(num_1+num_2)<<endl;
	}
	//���˶��ű��ʽ��д�� 
	//���ű��ʽ�����ű��ʽ���غ��ߵ�ֵ  
	while(cin>>num_1>>num_2 , num_1!=0&&num_2!=0){/*��дΪ!(num_1==0&&num_2==0)*/
		cout<<(num_1-num_2)/(num_1+num_2)<<endl;
	}
	return 0;
}
#endif
