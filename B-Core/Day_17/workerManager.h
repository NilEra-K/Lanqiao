#pragma once //��ֹͷ�ļ��ظ�����  
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
	//p:����ǰ��� 
	//pBefore:����ǰһ����� 
	//pAfter:�����һ�����  
	//ptr:�����ڴ�ָ��
	//h:ͷ���
	//e:β��� 
	Node*pBefore,*p,*pAfter,*ptr,*h,*e; 
};
class WorkerManager{
public:
	WorkerManager();
	~WorkerManager();
	
	void ShowMenu();
	void exitSystem(); 
};
