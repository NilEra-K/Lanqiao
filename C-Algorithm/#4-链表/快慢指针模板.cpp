#if 1
#include<bits/stdc++.h>
using namespace std;
//����ָ��  
LinkList findmiddle(LinkList L)
{
	LinkList p,q;
	p=L;//pΪ��ָ��  
	q=L;//qΪ��ָ��  
	while(p!=NULL&&p->next!=NULL){
		p=p->next->next;//��ָ��һ��������  
		q=q->next;		//��ָ��һ����һ��  
	}
	return q;//�����м���ָ��  
}
//����ָ��Ѱ�ҵ����� k ����� 
//��ָ�벻Ҫ��,��ָ������k-1�� Ȼ������ָ��һ��ͬ�����ٶ��� 
//����ָ���ߵ��յ�ʱ,��ָ�����ô��ڵ� k ����� 
//��Ϊ����֮��ľ���ʼ�ձ��� k-1 
//nΪ����ĳ��� ������ʱ��֪�� 
//n-k Ϊ������ k �����  
 
int main()
{
	
	return 0;
} 

#endif
