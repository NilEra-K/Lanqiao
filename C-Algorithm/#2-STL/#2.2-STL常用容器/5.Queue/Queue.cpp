/********************************************
	本节内容:
	Queue
	Queue构造函数:
	queue<T> que;
	queue(const queue &que);
	
	Queue赋值操作:
	queue& operator=(const queue &que);
	
	Queue数据存取:
	push(elem);
	pop();
	back(); 
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};
void test_1()
{
	queue<Person> q;
	Person p1("唐僧",30);
	Person p2("悟空",1000);
	Person p3("八戒",900);
	Person p4("沙僧",800);
	
	q.push(p1); 
	q.push(p2); 
	q.push(p3); 
	q.push(p4);
	
	//队列不提供迭代器,更不支持随机访问 
	while(!q.empty()){
		cout<<"队头元素:"<<endl;
		cout<<"姓名:"<<q.front().m_Name<<endl;
		cout<<"年龄:"<<q.front().m_Age<<endl;
		cout<<"-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<"队尾元素:"<<endl;
		cout<<"姓名:"<<q.back().m_Name<<endl;
		cout<<"年龄:"<<q.back().m_Age<<endl;
		q.pop();
	} 
	cout<<"队列大小"<<endl; 

}
int main()
{
	test_1();
	return 0;
}
#endif
