/***********************************
	��������:
	����ģ�尸�� 
	���ú���ģ���װһ������ĺ���,
	���ԶԲ�ͬ�������������������.
	
	�������--�Ӵ�С 
	�����㷨--ѡ������ 
	
	��������--char���� 
			--int ���� 
***********************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

template<class T>
void printArray(T arr,int len)
{
	for(int i=0;i<len;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
} 

template<class T>
void mySwap(T& a,T& b){
	T temp=a;
	a=b;
	b=temp;
}

template<class T>
void mySort(T arr[],int len)
{
	//����ѡ������,���ж�����Ӵ�С������ 
	for(int i=0;i<len;i++){
		int max=i;//�϶���������±� 
		for(int j=i+1;j<len;j++){
			//�϶����ֵ�ȱ���������ֵС 
			//˵��j�±�Ԫ�ز������������ֵ 
			if(arr[max]<arr[j]){
				max=j;
			} 	 
		}
		if(max!=i){
			mySwap(arr[max],arr[i]);
		}
	} 
}
void test_1()
{
	/*ע��*��ϰ*/
	//�����char ARR[]="abcd";
	//ʵ���Ǵ洢��5��Ԫ��,ʵ������"abcd\0" 
	char charArr[]={'b','d','c','f','e','a','g','h'};
	int num = sizeof(charArr)/sizeof(charArr[0]);
	/*ע��*��ϰ*/
	//��������ʱһ��Ҫ��������ĳ���  
	mySort(charArr,num);
	printArray(charArr,num); 
}
void test_2()
{
	int intArr[]={7,5,6,8,3,2,4,9,1};
	int num=sizeof(intArr)/sizeof(int);
	mySort(intArr,num);
	printArray(intArr,num);
}
int main()
{
	test_1(); 
	test_2();
	return 0;
}
#endif 
