/******************************
	����֪ʶ:
	�����������:
	�����е�������������¶���
	������һ�ֹ���
	����Ӧ��ͬ���������� 
	-=-=-=-=-=-=-=-=-=-=-=-=-=-
	�ӷ������������:
	����:ʵ�������Զ�������������ӵ�����
	*ע��:
	1.�������õ��������͵ı��ʽ��������ǲ����ܸı�� 
	2.��Ҫ������������� 
******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	Person()
	{
		
	}
	Person(int a,int b)
	{
		m_A=a;
		m_B=b;
	}
	//�ó�Ա����ȥʵ�ֵ� �˼��˲��� 
	Person PersonAddPerson(Person& p)
	{
		Person temp;
		//��ʱ�� m_A ���� this�� m_A + p�� m_B 
		temp.m_A=this->m_A + p.m_B;
		temp.m_B=this->m_B + p.m_B;
		return temp;
	}
	//���������ڼӺ�����,������ĺ���������:operator+ 
	Person operator+(Person& p)
	{
		Person temp;
		//��ʱ�� m_A ���� this�� m_A + p�� m_B 
		temp.m_A=this->m_A + p.m_B;
		temp.m_B=this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};
int main()
{
	//�������õ���������,��������֪�����ȥ��������� 
	int a =10;
	int b =20;
	cout<< a+b <<endl;
	
	Person p1(1,5);
	Person p2(10,20);
	Person p3 = p1 + p2;//��������֪����ô�� 
	cout<<p3.m_A<<endl<<p3.m_B<<endl;
	return 0;
}
#endif
