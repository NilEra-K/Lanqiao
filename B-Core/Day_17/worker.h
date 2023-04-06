#pragma once
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

//职工抽象类  
class Worker
{
public:
	//显示个人信息
	virtual void showInfo()=0; 
	//获取岗位名称  
	virtual string getDeptName()=0; 
	
	//职工编号 
	int m_ID;
	//职工姓名  
	string m_Name;
	//部门编号  
	int m_DeptID;
};

//普通员工类 
class Employee:public Worker
{
public:
	//构造函数 
	Employee(int id,string name,int dId);
	//显示个人信息
	virtual void showInfo(); 
	//获取岗位名称  
	virtual string getDeptName(); 
}; 

//经理类 
class Manager:public Worker
{
public:
	//构造函数 
	Manager(int id,string name,int dId);
	//显示个人信息
	virtual void showInfo(); 
	//获取岗位名称  
	virtual string getDeptName(); 
};

//老板类 
class Boss:public Worker
{
public:
	//构造函数 
	Boss(int id,string name,int dId);
	//显示个人信息
	virtual void showInfo(); 
	//获取岗位名称  
	virtual string getDeptName(); 
};

 
