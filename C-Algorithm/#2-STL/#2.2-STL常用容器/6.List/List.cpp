/********************************************
	本节内容:
	List
	将数据进行链式存储 
	由于链表的存储方式并不是连续的内存空间 
	因此链表list中的迭代器只支持前移和后移 
	属于双向迭代器  
	
	List的优点:
	采用动态存储分配,不会造成内存浪费和溢出 
	链表执行插入和删除操作十分方便 
	修改指针即可 不需要移动大量元素 
	
	List的缺点:
	链表灵活,但是空间(指针域)和时间(遍历)
	额外耗费较大 
	 
	List有一个重要的性质,插入操作和删除操作 
	都不会造成原有list迭代器的失效 
	这在vector里是不成立的  
	
	List容器的创建 
	函数原型:
	list<T> lst;
	list(begin,end);
	list(n,elem);
	list(const list &lst);
	
	List容器的创建 
	函数原型:
	assign(begin,end);
	assign(n,elem);
	list& operator=(const list &lst);
	
	 
	List容器的交换 
	函数原型:
	swap(lst);
	
	List容器大小操作 
	函数原型:
	size();
	empty();
	resize(num);
	resize(num,elem);
	
	List容器的插入和删除  
	函数原型:
	push_back(elem);
	pop_back();
	push_front(elem);
	pop_front();
	insert(pos,elem);
	insert(pos,n,elem);
	insert(pos,begin,end);
	clear();

	List容器数据的存取  
	函数原型:
	front();
	back();
	
	*注意:
	list容器中不可以通过[]或者at方式访问数据 
	
	List容器反转和排序   
	函数原型:
	reverse();
	sort();
	
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//基本操作相同 
//这里做一个排序案例 
//案例描述:
//将Person自定义数据类型进行排序,Person中属性有姓名,年龄,身高 
//排序规则:按照年龄进行升序,如果年龄相同,按照身高进行降序 
class Person{
public:
	Person(string name,int age,int height)
	{
		m_Name=name;
		m_Age=age;
		m_Height=height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};
bool ComparePerson(Person& p1,Person& p2)
{
	if(p1.m_Age==p2.m_Age){
		return p1.m_Height>p2.m_Height;
	}else{
		return p1.m_Age<p2.m_Age;
	}
}
void test_1()
{
	list<Person> l;
	Person p1("刘备",35,175);
	Person p2("曹操",45,180);
	Person p3("孙权",40,170);
	Person p4("赵云",25,195);
	Person p5("张飞",35,160);
	Person p6("关羽",35,200);
	
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	
	for(list<Person>::iterator it=l.begin();it!=l.end();it++){
		cout<<"姓名 : "<<it->m_Name<<" 年龄 : "<<it->m_Age<<" 身高 : "<<it->m_Height<<endl; 
	}
	cout<<"-------------------------------------"<<endl;
	l.sort(ComparePerson);
	for(list<Person>::iterator it=l.begin();it!=l.end();it++){
		cout<<"姓名 : "<<it->m_Name<<" 年龄 : "<<it->m_Age<<" 身高 : "<<it->m_Height<<endl; 
	}
}
int main()
{
	test_1();
	return 0;
}
#endif
