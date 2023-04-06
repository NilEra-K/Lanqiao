/*******************************
	本节内容:指针
	指针和指针变量含义不同
	
	指针的作用:可以通过指针间接
	访问内存 
	
	指针变量定义语法: 
	数据类型 * 变量名 
*******************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a =10;		//定义整型变量a 
	int* p =NULL;	//定义一个指针
	//其实 int* 代表一种数据类型, int*是指针类型, p是变量名 
	
	//指针变量赋值
	p = &a;
	cout<< p <<endl;
	cout<< &a<<endl;
	
	//指针的使用
	//通过 *操作指针变量指向内存
	cout<<"*p =" << *p<<endl;//解引用,*叫做取值运算
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=10;
	int* p=&a;
	cout<< *p <<endl;
	cout<<sizeof(p)<<endl;
	cout<<sizeof(char *)<<endl; 
	cout<<sizeof(float *)<<endl;
	cout<<sizeof(double *)<<endl;
	//所有指针类型在32位操作系统下是 4个字节
	//在64位操作系统下是 8个字节 
	return 0;
}
#endif


//空指针和野指针 
//空指针和野指针都不是我们申请的空间，因此不要访问 
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//空指针:指针变量指向内存中编号为0的空间
	//用途:初始化指针变量
	//注意:空指针指向的内存是不可以访问的 
	int* p=NULL;
	cout<< *p <<endl;
	//访问空指针一般会报错 
	//内存中0-255为系统占用的内存,不允许用户访问
	return 0;
}
#endif
#if 0 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//野指针:指针指向非法的内存空间
	int* p =(int*) 0x1100;
	cout<< *p <<endl;
	return 0;
}
#endif

#if 0
/**********************************
	Const修饰指针：
	Const 修饰指针有三种情况:
	1.Const修饰指针--常量指针 
	2.Const修饰常量--指针常量 
	3.Const即修饰指针，又修饰常量 
	 
**********************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a =10;
	int b =20;
	
	//常量指针
	//Const修饰的是指针,指针的指向可以修改
	//指针指向的值不可以修改
	 
	const int* p1 =&a; 
	p1 =&b;		//可以修改 
	//*p1=100; 	//Error 
	//指针常量 
	//Const修饰的是常量,指针的指向不可以修改
	//指针指向的值可以修改 
	int* const p2=&a;
	//p2=&b		//Error 
	*p2 =100;
	
	//Const即修饰指针，又修饰常量
	//指针的指向不可以修改,指针指向的值也不能修改 
	const int* const p3 =&a;
	// p3 =&b;	//Error
	//*P3 =100; //Error
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	int* p=arr;
	cout<<"第一个元素:"<<arr[0]<<endl;
	cout<<"用指针访问第一个元素:"<<*p <<endl;
	
	cout<<"第二个元素:"<<arr[1]<<endl;
	cout<<"用指针访问第二个元素:"<<*(p+1) <<endl;
	//利用指针来遍历数组
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<endl;
	}
	/*指针的运算*/
	//指针的运算不是简单的整数相加。
	//如果是一个 int* , +1的结果是增加一个int 的大小
	//同样的 果是一个 char* , +1的结果是增加一个char 的大小
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//指针数组 
	int a=1;
	int b=2;
	int c=3;
	
	int* arr_p[3];
	arr_p[0]=&a;
	arr_p[1]=&b;
	arr_p[2]=&c;
	//其实就是一个指针类型的数组
	//数组里面的每个元素都存了一个地址
	//如上面四行语句所示 
	cout<<sizeof(arr_p)<<' '<<sizeof(arr_p[0])<<endl;
	for(int i=0;i<sizeof(arr_p)/sizeof(arr_p[0]);i++){
		cout<< *(arr_p[i])<<endl;
	}
	return 0;
}
#endif

#if 0
//指针和函数 
#include<bits/stdc++.h>
using namespace std;
//值传递 
void swap_1(int num_1,int num_2){
	cout<<"交换前:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
	int t;
	t=num_1;
	num_1=num_2;
	num_2=t;
	cout<<"交换后:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
}
//地址传递
void swap_2(int* num_1,int* num_2){
	cout<<"交换前:"<<endl;
	cout<<"num_1 :"<<*num_1<<endl;
	cout<<"num_2 :"<<*num_2<<endl;
	int t;
	t=*num_1;
	*num_1=*num_2;
	*num_2=t;
	cout<<"交换后:"<<endl;
	cout<<"num_1 :"<<*num_1<<endl;
	cout<<"num_2 :"<<*num_2<<endl;
} 

int main()
{
	int a=10;
	int b=20;
	swap_1(a,b);
	cout<<a<<' '<<b<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl; 
	swap_2(&a,&b);
	cout<<a<<' '<<b<<endl;
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int len){
	//当数组名传入函数作为参数时
	//被退化为指向首元素的指针 
	//会丢失数组长度这一信息,所以,我们后还需要传递数组的长度 
	//即int arr[] 也可以写成 int* arr 
	int i=0 ,j=0;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1-i;j++){
			if(*(arr+j) > *(arr+j+1)){
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
}
void print(int* arr,int len){
	int i=0;
	for(i=0;i<len;i++){
		cout<<*(arr+i)<<endl;
	}
}
int main()
{
	int arr[10]={4,3,6,9,1,2,10,8,7,5};
	bubbleSort(arr,10);
	print(arr,10);
	return 0;
}
#endif
