/*********************************************
	��������: 
	�������ʹ������� 
	��̬ʹ��ʱ,��������������Կ��ٵ����� 
	������������Կ��ٵ�����,��ô����ָ�� 
	���ͷ�ʱ�޷����õ���������� 
	�����ʽ:
	������������������Ϊ���������ߴ������� 
	
	*ע��*
	��Ҫ�о���ĺ���ʵ�� 
	
	�������ʹ������������� :
	����Ǵ�������,�������ڳ�����,�޷�ʵ 
	��������  
*********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
	Animal()
	{
		cout<<"Animal���캯���ĵ���"<<endl;
	}
	virtual void Speak()=0;
	//����������,���Խ������ָ���ͷ�������󲻸ɾ������� 
	virtual ~Animal()
	{
		cout<<"Animal���������ĵ���"<<endl;
	}
	//������������ 
	virtual ~Animal()=0;
	
};
//������������ҲҪ����ʵ��  
Animal::~Animal()
{
	cout<<"Animal���������ĵ���"<<endl;
} 

class Cat:public Animal{
public:
	Cat(string name){
		cout<<"Cat���캯���ĵ���"<<endl;
		m_Name =new string (name);
	}
	virtual void Speak()
	{
		cout<<*m_Name <<"Сè��˵��"<<endl;
	}
	
	virtual ~Cat()
	{
		cout<<"Cat�����������ĵ���"<<endl;
		if(this->m_Name!=NULL)
		{
			delete m_Name;
			m_Name=NULL;
		}
	}
	string* m_Name;
};
void test_1()
{
	Animal* animal=new Cat("Tom");
	animal->Speak();
	delete animal;
	//ͨ������ָ��ȥ�ͷŻᵼ����������ͷŲ��ɾ� 
	//������������������� 
}
int main()
{
	test_1();
	return 0;
}
#endif
