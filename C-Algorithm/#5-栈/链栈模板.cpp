#if 1
#define ElemType int 
#include<bits/stdc++.h>
using namespace std;

typedef struct Snode{
	ElemType data;
	struct Snode* next;
}Snode,*LinkStack;

//初始化  
bool InitStack(LinkStack &S){
	S=NULL;
	return true;
}

//入栈 
bool Push(LinkStack &S,int e){
	LinkStack p;
	p=new Snode;
	p->data=e;
	p->next=S;
	S=p;
	return true;
} 

//出栈 
bool Pop(LinkStack &S,int &e){
	LinkStack p;
	if(S==NULL)
		return false;
	e=S->data;
	p=S;
	S=S->next;
	delete p;
	return true;
} 

//取栈顶操作 
int GetTop(LinkStack S){
	if(S!=NULL)
		return S->data;
	else
		return -1;
} 

int main()
{
	
	return 0;
}
#endif
