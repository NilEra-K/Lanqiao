#include"worker.h"

 
//普通员工类 
//构造函数
Employee::Employee(int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//显示个人信息 
void Employee::showInfo()
{
	cout<<"职工编号"<<this->m_ID <<'\t';
	cout<<"职工姓名"<<this->m_Name <<'\t';
	cout<<"职工岗位"<<this->getDeptName() <<'\t';
	cout<<"岗位职责:完成经理交给的任务"<<endl; 
} 
//获取岗位名称  
string Employee::getDeptName()
{
	return string("员工");//匿名对象 
}


//经理类 
//构造函数
Manager::Manager (int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//显示个人信息 
void Manager::showInfo()
{
	cout<<"职工编号"<<this->m_ID <<'\t';
	cout<<"职工姓名"<<this->m_Name <<'\t';
	cout<<"职工岗位"<<this->getDeptName() <<'\t';
	cout<<"岗位职责:完成老板交给的任务,并下发任务给员工"<<endl; 
} 
//获取岗位名称  
string Manager::getDeptName()
{
	return string("经理");//匿名对象 
}

//老板类 
//构造函数
Boss::Boss (int id,string name,int dId)
{
	this->m_ID=id;
	this->m_Name=name;
	this->m_DeptID=dId;
}
 
//显示个人信息 
void Boss::showInfo()
{
	cout<<"职工编号"<<this->m_ID <<'\t';
	cout<<"职工姓名"<<this->m_Name <<'\t';
	cout<<"职工岗位"<<this->getDeptName() <<'\t';
	cout<<"岗位职责:管理公司所有事务"<<endl; 
} 
//获取岗位名称  
string Boss::getDeptName()
{
	return string("老板");//匿名对象 
}


