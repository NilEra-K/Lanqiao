#if 1
#include<bits/stdc++.h>
using namespace std;

typedef struct DuLNode{
	int data;//数据域  
	struct DuLNode *prior,*next;//指针域  
}DuLNode,*DuLinkList;//LinkList为指向结构体 LNode 的指针类型 
 
void CreateDuList_H(DuLinkList &L){//头插法创建双向链表  
	int n;
	DuLinkList s;//定义一个指针变量  
	L=new DuLNode;
	L->prior=L->next=NULL;//先建立有一个带头结点的空链表  
	cout<<"请输入元素个数 n :"<<endl;
	cin>>n;
	cout<<"请依次输入n个元素:"<<endl;
	cout<<"头插法创建双向列表..."<<endl;
	while(n--){
		s=new DuLNode;//生成新结点 s 
		cin>>s->data;//输入元素值赋给新结点的数据域  
		if(L->next)
			L->next->prior=s;
		s->next=L->next;
		s->prior=L;
		L->next=s; //将新结点 s 插入到头结点之后 
	} 	 
}

int main()
{
	DuLinkList L;
	CreateDuList_H(L); 
	cout<<L<<endl;
	cout<<L->next<<endl;
	cout<<L->next->data<<endl;
	cout<<L->prior->next<<endl;
	return 0;
}
#endif
