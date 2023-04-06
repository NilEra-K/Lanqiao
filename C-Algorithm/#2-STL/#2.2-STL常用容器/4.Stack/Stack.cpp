/********************************************
	本节内容:
	Stack
	Stack构造函数:
	stack<T> stk;
	stack(const stack &stk);
	
	Stack复制操作:
	stack& operator=(const stack &stk);
	
	Stack数据存取: 
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
		cout<<"栈顶元素为:"<<s.top()<<endl;
		s.pop(); 
	}
	cout<<"栈的大小:"<<s.size()<<endl;
	
}
int main()
{
	test_1();
	return 0;
}
#endif
