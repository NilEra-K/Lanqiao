/******************************************************
	��������:
	Deque 
	����:˫������,���Զ�ͷ�˽���
	����ɾ������ 
	
	Deque��Vector������:
	Vector����ͷ���Ĳ���ɾ��Ч�ʵ� ������Խ��Ч��Խ�� 
	Deque��Զ���,��ͷ���Ĳ���ɾ���ٶȻ��Vector��
	Vector����Ԫ��ʱ����ٶȻ��Deque��,������ߵ��ڲ� 
	��ʵ���й�  	
-------------------------------------------------------		
	Deque�������� 
	����ԭ��: 
	deque<T> deqT;
	deque(begin,end);
	deque(n,elem);
	deque(const deque &deq);
-------------------------------------------------------	
	Deque������ֵ 
	����ԭ��: 
	deque& operator=(const deque &deq);
	assign(begin,end);
	assign(n,elem);
-------------------------------------------------------		 
	Deque������С���� 
	����ԭ��: 
	deque.empty();
	deque.size();
	deque.resize(num);
	deque.resize(num,elem);
-------------------------------------------------------	
	Deque�����ɾ��  
	����ԭ��: 
	push_back(elem);
	push_front(elem);
	pop_back();
	pop_front(); 
	
	ָ��λ�ò���:
	insert(pos,elem); 
-------------------------------------------------------	
	Deque���ݴ�ȡ  
	����ԭ��: 
	at(int idx);
	operator[];
	front();//���ص�һ�����ݾ�Ԫ�� 
	back();	//�������һ�����ݾ�Ԫ�� 
-------------------------------------------------------	
	Deque����  
	����ԭ��: 
	sort(iterator beg,iterator end);
	
******************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void printDeque(const deque<int>& d)
{//�βμ���const����,������ҲҪ����const����  
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
} 
void test_1()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	
	d.push_front(100);
	d.push_front(200);
	printDeque(d);
	sort(d.begin(),d.end());
	printDeque(d);
}
int main()
{
	test_1();
	return 0;
}
#endif
