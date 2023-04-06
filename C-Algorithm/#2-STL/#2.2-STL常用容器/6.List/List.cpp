/********************************************
	��������:
	List
	�����ݽ�����ʽ�洢 
	��������Ĵ洢��ʽ�������������ڴ�ռ� 
	�������list�еĵ�����ֻ֧��ǰ�ƺͺ��� 
	����˫�������  
	
	List���ŵ�:
	���ö�̬�洢����,��������ڴ��˷Ѻ���� 
	����ִ�в����ɾ������ʮ�ַ��� 
	�޸�ָ�뼴�� ����Ҫ�ƶ�����Ԫ�� 
	
	List��ȱ��:
	�������,���ǿռ�(ָ����)��ʱ��(����)
	����ķѽϴ� 
	 
	List��һ����Ҫ������,���������ɾ������ 
	���������ԭ��list��������ʧЧ 
	����vector���ǲ�������  
	
	List�����Ĵ��� 
	����ԭ��:
	list<T> lst;
	list(begin,end);
	list(n,elem);
	list(const list &lst);
	
	List�����Ĵ��� 
	����ԭ��:
	assign(begin,end);
	assign(n,elem);
	list& operator=(const list &lst);
	
	 
	List�����Ľ��� 
	����ԭ��:
	swap(lst);
	
	List������С���� 
	����ԭ��:
	size();
	empty();
	resize(num);
	resize(num,elem);
	
	List�����Ĳ����ɾ��  
	����ԭ��:
	push_back(elem);
	pop_back();
	push_front(elem);
	pop_front();
	insert(pos,elem);
	insert(pos,n,elem);
	insert(pos,begin,end);
	clear();

	List�������ݵĴ�ȡ  
	����ԭ��:
	front();
	back();
	
	*ע��:
	list�����в�����ͨ��[]����at��ʽ�������� 
	
	List������ת������   
	����ԭ��:
	reverse();
	sort();
	
********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//����������ͬ 
//������һ�������� 
//��������:
//��Person�Զ����������ͽ�������,Person������������,����,��� 
//�������:���������������,���������ͬ,������߽��н��� 
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
	Person p1("����",35,175);
	Person p2("�ܲ�",45,180);
	Person p3("��Ȩ",40,170);
	Person p4("����",25,195);
	Person p5("�ŷ�",35,160);
	Person p6("����",35,200);
	
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	
	for(list<Person>::iterator it=l.begin();it!=l.end();it++){
		cout<<"���� : "<<it->m_Name<<" ���� : "<<it->m_Age<<" ��� : "<<it->m_Height<<endl; 
	}
	cout<<"-------------------------------------"<<endl;
	l.sort(ComparePerson);
	for(list<Person>::iterator it=l.begin();it!=l.end();it++){
		cout<<"���� : "<<it->m_Name<<" ���� : "<<it->m_Age<<" ��� : "<<it->m_Height<<endl; 
	}
}
int main()
{
	test_1();
	return 0;
}
#endif
