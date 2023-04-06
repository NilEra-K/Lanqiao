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
	cout<<"0.退出管理系统"<<endl;
	cout<<"1.添加职工信息"<<endl;
	cout<<"2.显示职工信息"<<endl;
	cout<<"3.删除离职职工"<<endl;
	cout<<"4.修改职工信息"<<endl;
	cout<<"5.查找职工信息"<<endl;
	cout<<"6.按照编号排序"<<endl;
	cout<<"7.清空所有文档"<<endl;
	cout<<"**************"<<endl; 
	cout<<endl;	
}
void WorkerManager::exitSystem()
{
	cout<<"欢迎下次使用"<<endl;
	system("pause");
	exit(0);
}
//链表 
//创建了头尾结点 
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
//释放链表  
LinkedList::~LinkedList()
{
	
}
//添加结点到尾部  
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


