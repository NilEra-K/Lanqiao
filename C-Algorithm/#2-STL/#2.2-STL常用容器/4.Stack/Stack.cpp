/********************************************
	��������:
	Stack
	Stack���캯��:
	stack<T> stk;
	stack(const stack &stk);
	
	Stack���Ʋ���:
	stack& operator=(const stack &stk);
	
	Stack���ݴ�ȡ: 
	push(elem);
	pop();
	top(); 
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void test_1()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	while(!s.empty()){
		cout<<"ջ��Ԫ��Ϊ:"<<s.top()<<endl;
		s.pop(); 
	}
	cout<<"ջ�Ĵ�С:"<<s.size()<<endl;
	
}
int main()
{
	test_1();
	return 0;
}
#endif
