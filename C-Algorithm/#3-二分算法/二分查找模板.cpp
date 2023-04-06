/**************************************************
	二分查找模板 
	给定一个数组 A,目标值为 T,查找 T 在 A 中的位置 
	1.令 L 为0,R 为 n-1 
	2.如果 L>R，则搜索以失败告终  
	3.令 m (中间值元素)为"(L+R)/2" 
	4.如果Am < T，令 L 为 m+1 并回到步骤二 
	5.如果Am > T，令 R 为 m-1 并回到步骤二 
	6.当 Am = T 搜索结束;会传值 m  
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
