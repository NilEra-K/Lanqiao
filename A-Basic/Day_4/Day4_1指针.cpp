/*******************************
	��������:ָ��
	ָ���ָ��������岻ͬ
	
	ָ�������:����ͨ��ָ����
	�����ڴ� 
	
	ָ����������﷨: 
	�������� * ������ 
*******************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a =10;		//�������ͱ���a 
	int* p =NULL;	//����һ��ָ��
	//��ʵ int* ����һ����������, int*��ָ������, p�Ǳ����� 
	
	//ָ�������ֵ
	p = &a;
	cout<< p <<endl;
	cout<< &a<<endl;
	
	//ָ���ʹ��
	//ͨ�� *����ָ�����ָ���ڴ�
	cout<<"*p =" << *p<<endl;//������,*����ȡֵ����
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
	//����ָ��������32λ����ϵͳ���� 4���ֽ�
	//��64λ����ϵͳ���� 8���ֽ� 
	return 0;
}
#endif


//��ָ���Ұָ�� 
//��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ���� 
#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//��ָ��:ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	//��;:��ʼ��ָ�����
	//ע��:��ָ��ָ����ڴ��ǲ����Է��ʵ� 
	int* p=NULL;
	cout<< *p <<endl;
	//���ʿ�ָ��һ��ᱨ�� 
	//�ڴ���0-255Ϊϵͳռ�õ��ڴ�,�������û�����
	return 0;
}
#endif
#if 0 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Ұָ��:ָ��ָ��Ƿ����ڴ�ռ�
	int* p =(int*) 0x1100;
	cout<< *p <<endl;
	return 0;
}
#endif

#if 0
/**********************************
	Const����ָ�룺
	Const ����ָ�����������:
	1.Const����ָ��--����ָ�� 
	2.Const���γ���--ָ�볣�� 
	3.Const������ָ�룬�����γ��� 
	 
**********************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a =10;
	int b =20;
	
	//����ָ��
	//Const���ε���ָ��,ָ���ָ������޸�
	//ָ��ָ���ֵ�������޸�
	 
	const int* p1 =&a; 
	p1 =&b;		//�����޸� 
	//*p1=100; 	//Error 
	//ָ�볣�� 
	//Const���ε��ǳ���,ָ���ָ�򲻿����޸�
	//ָ��ָ���ֵ�����޸� 
	int* const p2=&a;
	//p2=&b		//Error 
	*p2 =100;
	
	//Const������ָ�룬�����γ���
	//ָ���ָ�򲻿����޸�,ָ��ָ���ֵҲ�����޸� 
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
	cout<<"��һ��Ԫ��:"<<arr[0]<<endl;
	cout<<"��ָ����ʵ�һ��Ԫ��:"<<*p <<endl;
	
	cout<<"�ڶ���Ԫ��:"<<arr[1]<<endl;
	cout<<"��ָ����ʵڶ���Ԫ��:"<<*(p+1) <<endl;
	//����ָ������������
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<endl;
	}
	/*ָ�������*/
	//ָ������㲻�Ǽ򵥵�������ӡ�
	//�����һ�� int* , +1�Ľ��������һ��int �Ĵ�С
	//ͬ���� ����һ�� char* , +1�Ľ��������һ��char �Ĵ�С
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ָ������ 
	int a=1;
	int b=2;
	int c=3;
	
	int* arr_p[3];
	arr_p[0]=&a;
	arr_p[1]=&b;
	arr_p[2]=&c;
	//��ʵ����һ��ָ�����͵�����
	//���������ÿ��Ԫ�ض�����һ����ַ
	//���������������ʾ 
	cout<<sizeof(arr_p)<<' '<<sizeof(arr_p[0])<<endl;
	for(int i=0;i<sizeof(arr_p)/sizeof(arr_p[0]);i++){
		cout<< *(arr_p[i])<<endl;
	}
	return 0;
}
#endif

#if 0
//ָ��ͺ��� 
#include<bits/stdc++.h>
using namespace std;
//ֵ���� 
void swap_1(int num_1,int num_2){
	cout<<"����ǰ:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
	int t;
	t=num_1;
	num_1=num_2;
	num_2=t;
	cout<<"������:"<<endl;
	cout<<"num_1 :"<<num_1<<endl;
	cout<<"num_2 :"<<num_2<<endl;
}
//��ַ����
void swap_2(int* num_1,int* num_2){
	cout<<"����ǰ:"<<endl;
	cout<<"num_1 :"<<*num_1<<endl;
	cout<<"num_2 :"<<*num_2<<endl;
	int t;
	t=*num_1;
	*num_1=*num_2;
	*num_2=t;
	cout<<"������:"<<endl;
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
	//�����������뺯����Ϊ����ʱ
	//���˻�Ϊָ����Ԫ�ص�ָ�� 
	//�ᶪʧ���鳤����һ��Ϣ,����,���Ǻ���Ҫ��������ĳ��� 
	//��int arr[] Ҳ����д�� int* arr 
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
