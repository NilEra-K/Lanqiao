#include"worker.h"

 
//��ͨԱ���� 
//���캯��
Employee::Employee(int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//��ʾ������Ϣ 
void Employee::showInfo()
{
	cout<<"ְ�����"<<this->m_ID <<'\t';
	cout<<"ְ������"<<this->m_Name <<'\t';
	cout<<"ְ����λ"<<this->getDeptName() <<'\t';
	cout<<"��λְ��:��ɾ�����������"<<endl; 
} 
//��ȡ��λ����  
string Employee::getDeptName()
{
	return string("Ա��");//�������� 
}


//������ 
//���캯��
Manager::Manager (int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//��ʾ������Ϣ 
void Manager::showInfo()
{
	cout<<"ְ�����"<<this->m_ID <<'\t';
	cout<<"ְ������"<<this->m_Name <<'\t';
	cout<<"ְ����λ"<<this->getDeptName() <<'\t';
	cout<<"��λְ��:����ϰ彻��������,���·������Ա��"<<endl; 
} 
//��ȡ��λ����  
string Manager::getDeptName()
{
	return string("����");//�������� 
}

//�ϰ��� 
//���캯��
Boss::Boss (int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//��ʾ������Ϣ 
void Boss::showInfo()
{
	cout<<"ְ�����"<<this->m_ID <<'\t';
	cout<<"ְ������"<<this->m_Name <<'\t';
	cout<<"ְ����λ"<<this->getDeptName() <<'\t';
	cout<<"��λְ��:����˾��������"<<endl; 
} 
//��ȡ��λ����  
string Boss::getDeptName()
{
	return string("�ϰ�");//�������� 
}


