/*本节内容*/
//职工管理系统可以用于管理公司内所有员工的信息 
/*
公司中职工分为三类:普通员工、经理、老板 
显示信息时,需要显示职工编号、姓名、岗位、职责 
普通员工职责:完成经理交给的任务 
经理职责:完成老板交给的任务,并下发任务给员工 
老板职责: 管理公司所有的事务 

管理系统中需要实现的功能如下:
--退出管理程序: 	退出当前管理系统 
--添加职工信息: 	实现批量添加职工功能,将信息录入到文件中,职工信息为:职工编号、姓名、部门编号 
--显示职工信息:		显示公司内部所有职工的信息  
--删除离职与员工:	按照编号删除指定的职工 
--修改职工信息: 	按照编号修改职工的个人信息 
--查找职工信息: 	按照职工编号或者职工的姓名进行查找相关的人员信息  
--按照编号排序:		按照职工编号进行排序,排序规则由用户指定  
--清空所有文档: 	清空所有职工信息(清空前需要再次确定,防止勿删) 
*/
#if 1
#include"workerManager.h"
#include"worker.h" 
using namespace std;
//测试代码 
/*
void test()
{
	Worker* worker=NULL;
	worker=new Employee(1,"张三",1);
	worker->showInfo();
	delete worker;
	
	worker=new Manager(2,"李四",2);
	worker->showInfo();
	delete worker;
	
	worker=new Boss(3,"王五",3);
	worker->showInfo();
	delete worker;
	
}
*/
int main()
{
	//实例化对象 
	WorkerManager wm; 
	//wm.ShowMenu();
	//test(); 
	int choice=0;
	while(true)
	{
		wm.ShowMenu();
		
		cout<<"请输入您的选择"<<endl;
		cin>>choice;
		
		switch(choice){
			case 0:
				wm.exitSystem();
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			default:
				system("cls");
				break;
		}
	}
	system("pause"); 
	return 0;
}
#endif
