#pragma once
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

//ְ��������  
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo()=0; 
	//��ȡ��λ����  
	virtual string getDeptName()=0; 
	
	//ְ����� 
	int m_ID;
	//ְ������  
	string m_Name;
	//���ű��  
	int m_DeptID;
};

//��ͨԱ���� 
class Employee:public Worker
{
public:
	//���캯�� 
	Employee(int id,string name,int dId);
	//��ʾ������Ϣ
	virtual void showInfo(); 
	//��ȡ��λ����  
	virtual string getDeptName(); 
}; 

//������ 
class Manager:public Worker
{
public:
	//���캯�� 
	Manager(int id,string name,int dId);
	//��ʾ������Ϣ
	virtual void showInfo(); 
	//��ȡ��λ����  
	virtual string getDeptName(); 
};

//�ϰ��� 
class Boss:public Worker
{
public:
	//���캯�� 
	Boss(int id,string name,int dId);
	//��ʾ������Ϣ
	virtual void showInfo(); 
	//��ȡ��λ����  
	virtual string getDeptName(); 
};

 
