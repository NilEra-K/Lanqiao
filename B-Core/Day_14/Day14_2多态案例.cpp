/***************************
	��������:
	��̬����----��������  
***************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//��ͨʵ��  
class Calculator{
public:
	int getResult(string oper)
	{
		if(oper=="+"){
			return m_Num1+m_Num2;
		}else if(oper=="-"){
			return m_Num1-m_Num2;
		}else if(oper=="*"){
			return m_Num1*m_Num2;
		}
	}
	int m_Num1;
	int m_Num2;
/*��ͨʵ��*/
//���Ҫ�ṩ�µ�����,����Ҫ�޸�Դ�� 
//����ʵ����������,�ᳫ����ԭ��
//����ԭ�� : ����չ���п���,���޸Ľ��йر�  
};

//��̬ʵ�� /*AbstractCalculator���������*/
//��̬�ŵ�:
//������֯�ṹ���� 
//�ɶ���ǿ 
//����ǰ�ںͺ��ڵ���չ�Լ�ά��  
/***************************************
	�������Զ�̬�ĸ������ : 
	��̬����˵�Ƕ���״̬---
	�Լ�������Ϊ����:�����ǳ��������-
	����ֱ���Խ��жԸ������״̬�Ĳ��� 
	��������� 
	-|--------�ӷ�������״̬ 
	-|--------����������״̬ 
	-|--------�˷�������״̬ 

***************************************/
class AbstractCalculator{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
}; 
class AddCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1+m_Num2;
	}
};
class SubCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1-m_Num2;
	}
};
class MulCalculator:public AbstractCalculator{
	virtual int getResult()
	{
		return m_Num1*m_Num2;
	}
};

void test_1()
{
	Calculator c;
	c.m_Num1=10;
	c.m_Num2=10;
	cout<<c.m_Num1<<" + "<<c.m_Num2<<" = "<<c.getResult("+")<<endl;
	cout<<c.m_Num1<<" - "<<c.m_Num2<<" = "<<c.getResult("-")<<endl;
	cout<<c.m_Num1<<" * "<<c.m_Num2<<" = "<<c.getResult("*")<<endl;
}
void test_2()
{
	//*��̬ʹ������ : ����ָ�������ָ���������
	//����һ���ӷ������� 
	AbstractCalculator* abc =new AddCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" + "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;
	//����һ������������ 
	abc =new SubCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" - "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;
	//����һ���˷������� 
	abc =new MulCalculator;
	abc->m_Num1=10;
	abc->m_Num2=10;
	cout<<abc->m_Num1<<" * "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc; 
}
int main()
{
	test_1(); 
	test_2();
	return 0;
}
#endif


#if 0
/****************
	��������:
	��̬ʣ��  
****************/
#include<bits/stdc++.h>
using namespace std;
/*���麯���ͳ�����*/
//�ڶ�̬��,ͨ���������麯������ʵ���Ǻ�������� 
//��Ҫ���ǵ���������д������ -----> ��д:��������ֵ���� ������ �����б� ��ȫһ�³�Ϊ��д 
//��˿��Խ��麯����Ϊ���麯�� 
//***���麯���﷨: 
//virtual ����ֵ���� ������ (�����б�)=0;
//���������˴��麯��,�����Ҳ��Ϊ������ 

/*������*/
//������һ�����麯��,�������ǳ����� 
//�������޷�ʵ�������� 
//*ע��:�������ȥ��д�����еĴ��麯��,����Ҳ���ڳ�����  
class Animal{
public:
	/*
	virtual void speak()
	{
		cout<<"������˵��!"<<endl; 
	}
	*/
	/*���麯��*/
	virtual void speak()=0;
}; 
class Cat:public Animal{
public:
	void speak()
	{
		cout<<"Сè��˵��!"<<endl;
	}
};
void doSpeak(Animal& animal)
{
	animal.speak();
}
void test_1()
{
	Cat cat;
	doSpeak(cat);
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
/*��̬����------��Ʒ��*/
class AbstractDrinking{
public:
	//��ˮ  
	virtual void Boil()=0;
	//����
	virtual void Brew()=0;
	//���뱭�� 
	virtual void PourInCup()=0;
	//���븨�� 
	virtual void PutSomething()=0;
	
	//�涨���� 
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//�������� 
class Coffee:public AbstractDrinking{
public:
	//��ˮ 
	virtual void Boil()
	{
		cout<<"-��ũ��ɽȪ-"<<endl;
	}
	//���� 
	virtual void Brew()
	{
		cout<<"-���ݿ���-"<<endl;
	}
	//���뱭��  
	virtual void PourInCup()
	{
		cout<<"-�����ȵ��뱭��-"<<endl;
	}
	//���븨��  
	virtual void PutSomething()
	{
		cout<<"-����ţ��-"<<endl;
	} 
}; 
//�������� 
class Tea:public AbstractDrinking{
public:
	//��ˮ 
	virtual void Boil()
	{
		cout<<"-������ˮ-"<<endl;
	}
	//���� 
	virtual void Brew()
	{
		cout<<"-���ݲ�Ҷ-"<<endl;
	}
	//���뱭��  
	virtual void PourInCup()
	{
		cout<<"-����ˮ���뱭��-"<<endl;
	}
	//���븨��  
	virtual void PutSomething()
	{
		cout<<"-�������-"<<endl;
	} 
};
void doWork(AbstractDrinking* drink)
{
	drink->MakeDrink();
	delete drink;
}
void test_1()
{
	doWork(new Coffee);//AbstractDrinking* abs =new Coffee;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	doWork(new Tea);
}
int main()
{
	test_1();
	return 0;
}
#endif
