/********************************************
	��������:
	Queue
	Queue���캯��:
	queue<T> que;
	queue(const queue &que);
	
	Queue��ֵ����:
	queue& operator=(const queue &que);
	
	Queue���ݴ�ȡ:
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
	Person p1("��ɮ",30);
	Person p2("���",1000);
	Person p3("�˽�",900);
	Person p4("ɳɮ",800);
	
	q.push(p1); 
	q.push(p2); 
	q.push(p3); 
	q.push(p4);
	
	//���в��ṩ������,����֧��������� 
	while(!q.empty()){
		cout<<"��ͷԪ��:"<<endl;
		cout<<"����:"<<q.front().m_Name<<endl;
		cout<<"����:"<<q.front().m_Age<<endl;
		cout<<"-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<"��βԪ��:"<<endl;
		cout<<"����:"<<q.back().m_Name<<endl;
		cout<<"����:"<<q.back().m_Age<<endl;
		q.pop();
	} 
	cout<<"���д�С"<<endl; 

}
int main()
{
	test_1();
	return 0;
}
#endif
