/********************************************************
	����֪ʶ:
	-��Ԫ-

	����ȷ�:
	����п���(Public),���������(Private) 
	���������е��˶��ܽ�ȥ,�������������˽�е�,�������� 
	��ֻ�����Լ���ȥ
	����,��Ҳ����������ĺû��Ѻͺù��۽�ȥ
	�ڳ�����,��Щ˽������Ҳ����һЩ������������з���,�� 
	��Ҫ�õ�-��Ԫ-���� 
	-��Ԫ-��Ŀ������һ�����������������һ������˽�г�Ա
	-��Ԫ-�Ĺؼ��� -friend- 
	
	��Ԫ������ʵ��:
	1.ȫ�ֺ�������Ԫ
	2.������Ԫ
	3.��Ա��������Ԫ ע��:��Ա������Ҫ������ʵ�� 
********************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class goodGayClass;//������ 
class Building{
//���߱�����,goodGayȫ�ֺ���,��Builiding��ĺ�����,���Է���˽�����е�����
	friend void goodGay(Building* building); 
//���߱�����,goodGayClass��,��Builiding��ĺ�����,���Է���˽�����е�����
	friend class goodGayClass;
//���߱�����,goodGayClass�����visit_2(),��Builiding��ĺ�����,���Է���˽�����е�����
	friend void goodGayClass::visit_2();
public:
	string m_SittingRoom;
	Building()
	{
		m_SittingRoom="����";
		m_Bedroom="����";
	}
private:
	string m_Bedroom;
};

class goodGayClass{
public:
	goodGayClass()
	{
		building=new Building;
	}
	~goodGayClass()
	{
		delete building;
	}
	void visit()
	{
		cout<<"�û������ڷ��� : "<<building->m_SittingRoom<<endl;
		cout<<"�û������ڷ��� : "<<building->m_Bedroom<<endl;
	}
	void visit_2()
	{
		cout<<"�û������ڷ��� : "<<building->m_SittingRoom<<endl;
		cout<<"�û������ڷ��� : "<<building->m_Bedroom<<endl;
	}
	
	Building* building;
};
void goodGay(Building* building)
{
	cout<<"�û������ڷ��� : "<<building->m_SittingRoom<<endl;
	cout<<"�û������ڷ��� : "<<building->m_Bedroom<<endl;	 
}
void test_1()
{
	Building b;
	goodGay(&b);
	goodGayClass g;
	g.visit();
}
int main()
{
	test_1();	
	return 0;
}
#endif
