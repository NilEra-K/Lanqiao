#if 1
#include<bits/stdc++.h>
using namespace std;

typedef struct DuLNode{
	int data;//������  
	struct DuLNode *prior,*next;//ָ����  
}DuLNode,*DuLinkList;//LinkListΪָ��ṹ�� LNode ��ָ������ 
 
void CreateDuList_H(DuLinkList &L){//ͷ�巨����˫������  
	int n;
	DuLinkList s;//����һ��ָ�����  
	L=new DuLNode;
	L->prior=L->next=NULL;//�Ƚ�����һ����ͷ���Ŀ�����  
	cout<<"������Ԫ�ظ��� n :"<<endl;
	cin>>n;
	cout<<"����������n��Ԫ��:"<<endl;
	cout<<"ͷ�巨����˫���б�..."<<endl;
	while(n--){
		s=new DuLNode;//�����½�� s 
		cin>>s->data;//����Ԫ��ֵ�����½���������  
		if(L->next)
			L->next->prior=s;
		s->next=L->next;
		s->prior=L;
		L->next=s; //���½�� s ���뵽ͷ���֮�� 
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
