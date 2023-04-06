/****************
	本节内容 :
	高精度加法 
****************/

#if 1
#include<bits/stdc++.h>
using namespace std;
void add(char*num_1,char* num_2,char* rst,int len_1,int len_2)
{
	int i,j,k;
	int carry=0;
	for(i=len_1-1,j=len_2-1,k=len_1-1;i>=0;i--,j--,k--){
		//转化成int去计算
		int intNum1=num_1[i]-'0'; 
		int intNum2=num_1[j]-'0';
		int result=0;
		
		if(j>=0) {
			result=intNum1+intNum2;
		}else{
			result=intNum1+0;			
		}
		
		//处理进位  
		if(carry!=0){
			result+=carry;
			carry=0;
		} 
		if(result>=10){
			carry=result/10;
			result%=10;
		}
		rst[k]=result+'0';//最后再将int转换为char
		 
	} 
}
int main()
{
	char num_1[100000] ={0};
	char num_2[100000] ={0};
	char rst[100000] ={0};
	
	cin>> num_1 >> num_2;
	int len_1=strlen(num_1);
	int len_2=strlen(num_2);
	
	if(len_1>=len_2){
		add(num_1,num_2,rst,len_1,len_2);
	}else{
		add(num_2,num_1,rst,len_2,len_1);
	}
	//打印输出
	for(int i=0;rst[i]!='\0';i++){
		cout<<rst[i];
	}
	return 0;
}
#endif
