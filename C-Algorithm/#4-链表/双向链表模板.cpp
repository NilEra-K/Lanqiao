#if 1
#include<bits/stdc++.h>
using namespace std;

typedef struct DuLNode{
	int data;//������  
	struct DuLNode *prior,*next;//ָ����  
}DuLNode,*DuLinkList;//LinkListΪָ��ṹ�� LNode ��ָ������ 

bool InitDuList_L(DuLinkList &L){//����һ���յ�˫������ L 
	L=new DuLNode;//�����½����Ϊͷ���,��ͷָ�� L ָ��ͷ���  
	if(!L)
		return false;//���ɽ��ʧ��  
	L->prior=L->next=NULL;//ͷ��������ָ�����ÿ�  
	return true;
} 
/* �½�� 
|--------|--------|--------|
|  NULL  |  DATA  |  NULL  |
|--------|--------|--------|
*/
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

bool GetElem_L(DuLinkList L,int i,int &e){
	DuLinkList p;
	p=L->next;	// pָ���һ����� 
	int j=1;	// jΪ������ 
	while(j<i&&p){//˳�������ɨ��,ֱ�� p ָ��� i ��Ԫ�ػ� p Ϊ�� 
		p=p->next;//p ָ����һ�����  
		j++;//������ j ��Ӧ�� 1; 
	}
	if(!p||j>1)
		return false;
	e=p->data;
	return true; 
}

bool LocateElem_L(DuLinkList L,int e){//����ֵΪe��Ԫ��  
	DuLinkList p;
	p=L->next;
	while(p&&p->data!=e)//˳�������ɨ��,ֱ�� pΪ�� �� p ָ�����ֵΪ e 
		p=p->next;// p ָ����һ����� 
	if(!p)
		return false;//����ʧ�� p ΪNULL 
	return true; 
}

bool ListInsert_L(DuLinkList &L,int i,int &e){//˫������� i ��λ��֮ǰ����ֵΪ e 
	DuLinkList p=L,s;
	int j=0;
	while(p&&(j<i)){//���ҵ� i �����,pָ��ý�� 
		p=p->next;
		j++;
	}
	if(!p||(j>i))// i>n+1 ���� i<1 
		return false;
	s=new DuLNode;//�����½�� 
	s->data=e;
	s->prior->next=s;
	s->prior=p->prior; 
	s->next=p;
	p->prior=s;
	return true;
} 

bool ListDelete_L(DuLinkList &L,int i){
	DuLinkList p=L;
	int j=0;
	while(p&&(j<i)){//���ҵ� i �����,pָ��ý�� 
		p=p->next;
		j++;
	}
	if(!p||(j>i))// i>n ���� i<1 ʱ,ɾ��λ�ò�����  
		return false;
	if(p->next)//��� p ��ֱ�Ӻ�̽�����  
		p->next->prior=p->prior; 
	p->prior->next=p->next;
	delete p;//�ͷű�ɾ�����Ŀռ�  
	return true;	
}

void Listprint_L(DuLinkList L){//˫����������  
	DuLinkList p;
	p=L->next;
	while(p){
		cout<<p->data<<"\t";
		p=p->next;
	}
	cout<<endl;
} 

int main(){
	int i,x,e,choose;
	DuLinkList L;
	cout<<"1. ��ʼ��\n";
	cout<<"2. ����������ǰ�巨��\n";
	cout<<"3. ����������β�巨��\n";
	cout<<"4. ȡֵ\n";
	cout<<"5. ����\n";
	cout<<"6. ����\n";
	cout<<"7. ɾ��\n";
	cout<<"8. ���\n";
	cout<<"0. �˳�\n";
	choose=-1;
	while(choose!=0){
		cout<<"����������ѡ��:";
		cin>>choose;
		switch(choose){
		case 1: 
			if(InitDuList_L(L))
				cout<<"��ʼ��һ���յ�˫������!\n";
			break;
		case 2:
			CreateDuList_H(L);
            cout<<"ǰ�巨����˫������������:\n";
            Listprint_L(L);
			break;
        case 3:
			cout<<"�������û����,û�뵽�ɹ�����"<<endl; 
			break;
		case 4:
			cout<<"������һ��λ��i����ȡֵ:";
			cin>>i;
			if (GetElem_L(L,i,e)){
				cout<<"���ҳɹ�\n";
				cout<<"��"<<i<<"��Ԫ���ǣ�"<<e<<endl;
			}
			else
				cout<<"����ʧ��\n\n";
			break;
		case 5:
			cout<<"��������Ҫ����Ԫ��x:";
			cin>>x;
			if(LocateElem_L(L,x))
				cout<<"���ҳɹ�\n";
			else
				cout<<"����ʧ��! "<<endl;
			break;
		case 6:
			cout<<"����������λ�ú�Ԫ�أ��ÿո������:";
			cin>>i;
			cin>>x;
			if(ListInsert_L(L,i,x))
				cout<<"����ɹ�.\n\n";
			else
				cout<<"����ʧ��!\n\n";
			break;
		case 7: 
			cout<<"��������Ҫɾ����Ԫ��λ��i:";
			cin>>i;
			if(ListDelete_L(L,i))
				cout<<"ɾ���ɹ�!\n";
			else
				cout<<"ɾ��ʧ��!\n";
			break;
		case 8:
			cout<<"��ǰ˫�����������Ԫ�طֱ�Ϊ:\n";
			Listprint_L(L);
			cout<<endl;
			break;
		}
	}
}
#endif


