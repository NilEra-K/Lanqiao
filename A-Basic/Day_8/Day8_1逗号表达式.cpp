/****************************
	本节内容:
	逗号表达式和内存分区模型 
****************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//求两束只差除以两数之和 
	double num_1=0,num_2=0;
	//不用逗号表达式的写法 
	while(true){
		cin>>num_1>>num_2;
		if(num_1==0&&num_2==0)	break;
		cout<<(num_1-num_2)/(num_1+num_2)<<endl;
	}
	//用了逗号表达式的写法 
	//逗号表达式，逗号表达式返回后者的值  
	while(cin>>num_1>>num_2 , num_1!=0&&num_2!=0){/*或写为!(num_1==0&&num_2==0)*/
		cout<<(num_1-num_2)/(num_1+num_2)<<endl;
	}
	return 0;
}
#endif
