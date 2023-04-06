#if 1
#include<bits/stdc++.h>
using namespace std;

typedef struct DuLNode{
	int data;//数据域  
	struct DuLNode *prior,*next;//指针域  
}DuLNode,*DuLinkList;//LinkList为指向结构体 LNode 的指针类型 

bool InitDuList_L(DuLinkList &L){//构造一个空的双向链表 L 
	L=new DuLNode;//生成新结点作为头结点,用头指针 L 指向头结点  
	if(!L)
		return false;//生成结点失败  
	L->prior=L->next=NULL;//头结点的两个指针域置空  
	return true;
} 
/* 新结点 
|--------|--------|--------|
|  NULL  |  DATA  |  NULL  |
|--------|--------|--------|
*/
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

bool GetElem_L(DuLinkList L,int i,int &e){
	DuLinkList p;
	p=L->next;	// p指向第一个结点 
	int j=1;	// j为计数器 
	while(j<i&&p){//顺链域向后扫描,直到 p 指向第 i 个元素或 p 为空 
		p=p->next;//p 指向下一个结点  
		j++;//计数器 j 相应加 1; 
	}
	if(!p||j>1)
		return false;
	e=p->data;
	return true; 
}

bool LocateElem_L(DuLinkList L,int e){//查找值为e的元素  
	DuLinkList p;
	p=L->next;
	while(p&&p->data!=e)//顺链域向后扫描,直到 p为空 或 p 指向结点的值为 e 
		p=p->next;// p 指向下一个结点 
	if(!p)
		return false;//查找失败 p 为NULL 
	return true; 
}

bool ListInsert_L(DuLinkList &L,int i,int &e){//双向链表第 i 个位置之前插入值为 e 
	DuLinkList p=L,s;
	int j=0;
	while(p&&(j<i)){//查找第 i 个结点,p指向该结点 
		p=p->next;
		j++;
	}
	if(!p||(j>i))// i>n+1 或者 i<1 
		return false;
	s=new DuLNode;//生成新结点 
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
	while(p&&(j<i)){//查找第 i 个结点,p指向该结点 
		p=p->next;
		j++;
	}
	if(!p||(j>i))// i>n 或者 i<1 时,删除位置不合理  
		return false;
	if(p->next)//如果 p 的直接后继结点存在  
		p->next->prior=p->prior; 
	p->prior->next=p->next;
	delete p;//释放被删除结点的空间  
	return true;	
}

void Listprint_L(DuLinkList L){//双向链表的输出  
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
	cout<<"1. 初始化\n";
	cout<<"2. 创建单链表（前插法）\n";
	cout<<"3. 创建单链表（尾插法）\n";
	cout<<"4. 取值\n";
	cout<<"5. 查找\n";
	cout<<"6. 插入\n";
	cout<<"7. 删除\n";
	cout<<"8. 输出\n";
	cout<<"0. 退出\n";
	choose=-1;
	while(choose!=0){
		cout<<"请输入数字选择:";
		cin>>choose;
		switch(choose){
		case 1: 
			if(InitDuList_L(L))
				cout<<"初始化一个空的双向链表!\n";
			break;
		case 2:
			CreateDuList_H(L);
            cout<<"前插法创建双向链表输出结果:\n";
            Listprint_L(L);
			break;
        case 3:
			cout<<"这个功能没开发,没想到吧哈哈哈"<<endl; 
			break;
		case 4:
			cout<<"请输入一个位置i用来取值:";
			cin>>i;
			if (GetElem_L(L,i,e)){
				cout<<"查找成功\n";
				cout<<"第"<<i<<"个元素是："<<e<<endl;
			}
			else
				cout<<"查找失败\n\n";
			break;
		case 5:
			cout<<"请输入所要查找元素x:";
			cin>>x;
			if(LocateElem_L(L,x))
				cout<<"查找成功\n";
			else
				cout<<"查找失败! "<<endl;
			break;
		case 6:
			cout<<"请输入插入的位置和元素（用空格隔开）:";
			cin>>i;
			cin>>x;
			if(ListInsert_L(L,i,x))
				cout<<"插入成功.\n\n";
			else
				cout<<"插入失败!\n\n";
			break;
		case 7: 
			cout<<"请输入所要删除的元素位置i:";
			cin>>i;
			if(ListDelete_L(L,i))
				cout<<"删除成功!\n";
			else
				cout<<"删除失败!\n";
			break;
		case 8:
			cout<<"当前双向链表的数据元素分别为:\n";
			Listprint_L(L);
			cout<<endl;
			break;
		}
	}
}
#endif


