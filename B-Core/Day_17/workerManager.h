#pragma once //防止头文件重复包含  
#include<bits/stdc++.h>
#include<iostream>
#include"worker.h"
using namespace std;

class Node{
	friend class LinkedList;
public:	
	Worker* m_Data_Worker;
private:
	Node* preptr;
	Node* postptr;
};

class LinkedList{
public: 
	LinkedList();
	~LinkedList();
	void newNodeToEnd(int ID,string name,int dSelect);
	 
	int NodeNum=0;

private:
	Node node;
	//p:管理当前结点 
	//pBefore:管理前一个结点 
	//pAfter:管理后一个结点  
	//ptr:分配内存指针
	//h:头结点
	//e:尾结点 
	Node*pBefore,*p,*pAfter,*ptr,*h,*e; 
};
class WorkerManager{
public:
	WorkerManager();
	~WorkerManager();
	
	void ShowMenu();
	void exitSystem(); 
};
