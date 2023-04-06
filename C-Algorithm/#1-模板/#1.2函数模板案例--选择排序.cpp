/***********************************
	本节内容:
	函数模板案例 
	利用函数模板封装一个排序的函数,
	可以对不同数据类型数组进行排序.
	
	排序规则--从大到小 
	排序算法--选择排序 
	
	测试数据--char数组 
			--int 数组 
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
	//利用选择排序,进行对数组从大到小的排序 
	for(int i=0;i<len;i++){
		int max=i;//认定最大数的下标 
		for(int j=i+1;j<len;j++){
			//认定最大值比遍历出的数值小 
			//说明j下标元素才是真正的最大值 
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
	/*注意*复习*/
	//如果是char ARR[]="abcd";
	//实际是存储了5个元素,实际上是"abcd\0" 
	char charArr[]={'b','d','c','f','e','a','g','h'};
	int num = sizeof(charArr)/sizeof(charArr[0]);
	/*注意*复习*/
	//传入数组时一定要传入数组的长度  
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
