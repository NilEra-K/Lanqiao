#if 0
#include<bits/stdc++.h>
using namespace std;
struct hero{
	string name;
	int age;
	string sex;
};
void bubbleSort(hero* arr,int len){
	for(int i=0;i<len -1;i++){
		for(int j=0;j<len-1-i;j++){
			if(arr[j].age>arr[j+1].age){
				hero temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printHeroes(hero* arr,int len){
	for(int i=0;i<len;i++){
		cout<<"���� : "<<arr[i].name<<endl;
		cout<<"�Ա� : "<<arr[i].sex<<endl;
		cout<<"���� : "<<arr[i].age<<endl;
	}
}
int main()
{
	struct hero arr[5]={
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	bubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
	printHeroes(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	int score;
};
struct Teacher{
	string name;
	struct Student sArr[5];
};
void Init(Teacher* tArr,int len)
{
	string tName="��ʦ";
	string sName="ѧ��";
	char nameSeed[]="ABCDE";
	for(int i=0;i<len;i++){
		tArr[i].name=tName + nameSeed[i];
		for(int j=0;j<5;j++){
			tArr[i].sArr[j].name=sName+nameSeed[j];
			tArr[i].sArr[j].score=rand()%100; //0-99
		} 
	}
}
void print(Teacher* tArr,int len)
{
	for(int i=0;i<len;i++){
		cout<< tArr[i].name<<endl;
		for(int j=0;j<5;j++){
			cout<<"ѧ������ : "<<tArr[i].sArr[j].name<<"���� : "<< tArr[i].sArr[j].score<<endl;
		}
	}
}
int main()
{
	Teacher tArr[3];
	Init(tArr,sizeof(tArr)/sizeof(tArr[0]));
	print(tArr,sizeof(tArr)/sizeof(tArr[0]));
	return 0;
}
#endif
