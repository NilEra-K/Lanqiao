/*��������*/
//ְ������ϵͳ�������ڹ���˾������Ա������Ϣ 
/*
��˾��ְ����Ϊ����:��ͨԱ���������ϰ� 
��ʾ��Ϣʱ,��Ҫ��ʾְ����š���������λ��ְ�� 
��ͨԱ��ְ��:��ɾ����������� 
����ְ��:����ϰ彻��������,���·������Ա�� 
�ϰ�ְ��: ����˾���е����� 

����ϵͳ����Ҫʵ�ֵĹ�������:
--�˳��������: 	�˳���ǰ����ϵͳ 
--���ְ����Ϣ: 	ʵ���������ְ������,����Ϣ¼�뵽�ļ���,ְ����ϢΪ:ְ����š����������ű�� 
--��ʾְ����Ϣ:		��ʾ��˾�ڲ�����ְ������Ϣ  
--ɾ����ְ��Ա��:	���ձ��ɾ��ָ����ְ�� 
--�޸�ְ����Ϣ: 	���ձ���޸�ְ���ĸ�����Ϣ 
--����ְ����Ϣ: 	����ְ����Ż���ְ�����������в�����ص���Ա��Ϣ  
--���ձ������:		����ְ����Ž�������,����������û�ָ��  
--��������ĵ�: 	�������ְ����Ϣ(���ǰ��Ҫ�ٴ�ȷ��,��ֹ��ɾ) 
*/
#if 1
#include"workerManager.h"
#include"worker.h" 
using namespace std;
//���Դ��� 
/*
void test()
{
	Worker* worker=NULL;
	worker=new Employee(1,"����",1);
	worker->showInfo();
	delete worker;
	
	worker=new Manager(2,"����",2);
	worker->showInfo();
	delete worker;
	
	worker=new Boss(3,"����",3);
	worker->showInfo();
	delete worker;
	
}
*/
int main()
{
	//ʵ�������� 
	WorkerManager wm; 
	//wm.ShowMenu();
	//test(); 
	int choice=0;
	while(true)
	{
		wm.ShowMenu();
		
		cout<<"����������ѡ��"<<endl;
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
