/************************************
	�������� :
	����(��ʯ)�̳� 
	����������̳�ͬһ������ 
	����ĳ����ͬʱ�̳������������� 
	���ּ̳б���Ϊ����(��ʯ)�̳� 
	
	-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	�ٸ�����:
	���� 
	--|-----�� -----| 
	--|-----�� -----|
					 |-----���� 
					�����ռ����������
					�����յ����� 
	���ֳ�������״ : 
		*
	*		*
		*	
		
	***�ܽ�
	�����μ̳�,��������ӵ����ͬ����  
	��Ҫ��������������	
************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
	int m_Age;
}; 
class Sheep:virtual public Animal{
	
};
class Tuo:virtual public Animal{
	
};
class SheepTuo:public Sheep,public Tuo{
	
};

void test_1()
{
	//������̳п��Խ�����μ̳е�����
	//ֻ��Ҫ�ڼ̳�ǰ����� virtual �ؼ��ּ���
	
	//-vbptr-�����ָ�� --> vbtable //������ 
	//v--virtual
	//b--base
	//ptr--pointer 
	SheepTuo st;
	st.Sheep::m_Age=100;
	st.Tuo::m_Age=200;
	
	cout<< "st.Sheep::m_Age = "<<st.Sheep::m_Age<<endl;
	cout<< "st.Tuo::m_Age = "<<st.Tuo::m_Age <<endl;
	cout<< "st.m_Age = "<<st.m_Age <<endl; 
	/*	������(��ʱδʹ����̳�):
			st.Sheep::m_Age = 100
			st.Tuo::m_Age = 200
		������(��ʱʹ����̳�):	
			st.Sheep::m_Age = 200
			st.Tuo::m_Age = 200
			st.m_Age = 200
	*/
}
int main()
{
	test_1(); 
	return 0;
}
#endif
