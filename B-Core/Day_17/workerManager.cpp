#include"workerManager.h"

WorkerManager::WorkerManager()
{
	
}
WorkerManager::~WorkerManager()
{
	
}
void WorkerManager::ShowMenu()
{
	cout<<"**************"<<endl; 
	cout<<"0.�˳�����ϵͳ"<<endl;
	cout<<"1.���ְ����Ϣ"<<endl;
	cout<<"2.��ʾְ����Ϣ"<<endl;
	cout<<"3.ɾ����ְְ��"<<endl;
	cout<<"4.�޸�ְ����Ϣ"<<endl;
	cout<<"5.����ְ����Ϣ"<<endl;
	cout<<"6.���ձ������"<<endl;
	cout<<"7.��������ĵ�"<<endl;
	cout<<"**************"<<endl; 
	cout<<endl;	
}
void WorkerManager::exitSystem()
{
	cout<<"��ӭ�´�ʹ��"<<endl;
	system("pause");
	exit(0);
}
//���� 
//������ͷβ��� 
LinkedList::LinkedList()
{
	NodeNum=0;
	h=new Node;
	e=new Node;
	h->preptr=NULL;
	e->postptr=NULL;
	h->postptr=e;
	e->preptr=h;
	
}
//�ͷ�����  
LinkedList::~LinkedList()
{
	
}
//��ӽ�㵽β��  
void LinkedList::newNodeToEnd(int ID,string name,int dSelect)
{
	ptr=new Node;
	
	p=ptr;
	pAfter=e;
	
	p->postptr =pAfter;
	p->preptr =pAfter->preptr;
	//p->preptr =pBefore=pAfter->preptr;
	
	pBefore->postptr=p;
	pAfter->preptr=p;
	
}


