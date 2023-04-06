#if 1
#include<bits/stdc++.h>
using namespace std;
//快慢指针  
LinkList findmiddle(LinkList L)
{
	LinkList p,q;
	p=L;//p为快指针  
	q=L;//q为慢指针  
	while(p!=NULL&&p->next!=NULL){
		p=p->next->next;//快指针一次走两步  
		q=q->next;		//慢指针一次走一步  
	}
	return q;//返回中间结点指针  
}
//快慢指针寻找倒数第 k 个结点 
//慢指针不要动,快指针先走k-1步 然后两个指针一起同样的速度走 
//当快指针走到终点时,慢指针正好处于第 k 个结点 
//因为他们之间的距离始终保持 k-1 
//n为链表的长度 我们暂时不知道 
//n-k 为倒数第 k 个结点  
 
int main()
{
	
	return 0;
} 

#endif
