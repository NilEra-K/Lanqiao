/**************************************************
	���ֲ���ģ�� 
	����һ������ A,Ŀ��ֵΪ T,���� T �� A �е�λ�� 
	1.�� L Ϊ0,R Ϊ n-1 
	2.��� L>R����������ʧ�ܸ���  
	3.�� m (�м�ֵԪ��)Ϊ"(L+R)/2" 
	4.���Am < T���� L Ϊ m+1 ���ص������ 
	5.���Am > T���� R Ϊ m-1 ���ص������ 
	6.�� Am = T ��������;�ᴫֵ m  
**************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> v,int key)
{
	int start=0;
	int end=v.size()-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(v.at(mid)<key){
			start=mid+1;
		}else if(v.at(mid)>key){
			end=mid-1;
		}else if(v.at(mid)){
			//cout<<mid<<endl; 
			return mid;
		}
	}
	return -1;
} 
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	v.push_back(11);
	v.push_back(13);
	v.push_back(15);
	v.push_back(15);
	int key;
	cin>>key;
	cout<<binary(v,key);
	
	return 0;
}
#endif
