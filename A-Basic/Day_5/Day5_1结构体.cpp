/*****************************************
	��������:
	�ṹ��
	�ṹ���﷨:
	struct �ṹ������ {�ṹ���Ա�б�}; 
	 
*****************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
struct Student{
	int ID;
	string name;
	int age;
	int Cscore; 
};
int main()
{
	//�ṹ������Ĵ�����ʽ_1
	//struct �ṹ���� ������
	struct Student stu1;
	stu1.ID=1;
	stu1.name="����";
	stu1.age=18;
	stu1.Cscore=100; 
	
	cout<<"ѧ�� : "<<stu1.ID<<endl;
	cout<<"���� : "<<stu1.name<<endl;
	cout<<"���� : "<<stu1.age<<endl;
	cout<<"�ɼ� : "<<stu1.Cscore<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	//�ṹ������Ĵ�����ʽ_2
	//struct �ṹ���� ������ ={��ֵ}
	struct Student stu2={2,"����",19,80};
	cout<<"ѧ�� : "<<stu2.ID<<endl;
	cout<<"���� : "<<stu2.name<<endl;
	cout<<"���� : "<<stu2.age<<endl;
	cout<<"�ɼ� : "<<stu2.Cscore<<endl;
	 
	return 0;
}
#endif

#if 0
/**********************
	������:
	�ṹ��ָ��
**********************/
#include<bits/stdc++.h>
using namespace std;
struct Student{
	int ID;
	string name;
	int age;
	int Cscore; 
};
int main()
{
	Student stu={1,"����",19,90};
	struct Student* p=NULL;
	stu.age=18;
	p.Cscore=100;
	p->Cscore;//ָ��ͨ�� -> ����������ʳ�Ա 
	//ע�⣺' . '��' -> '��������ͬ
	//����  ' -> '����ָ���ʱ��Ӧ�� 
	
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	int age;
	int score;
};
struct Teacher{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main()
{
	struct Teacher t1;
	t1.id=1;
	t1.name="����";
	t1.age=40;
	
	t1.stu.name="����";
	t1.stu.age=19;
	t1.stu.score=80;
	//�ɴ˿���ʵ�ֽṹ��Ƕ�׽ṹ��Ĳ��� 
	cout<<"��ʦ��� : "<<t1.id<<endl;
	cout<<"��ʦ���� : "<<t1.name<<endl; 
	cout<<"��ʦ���� : "<<t1.age<<endl; 
	cout<<"��ʦѧ������ : "<<t1.stu.name<<endl; 
	cout<<"��ʦѧ������ : "<<t1.stu.age<<endl; 
	cout<<"��ʦѧ���ɼ� : "<<t1.stu.score<<endl; 
	
	return 0;
}
#endif

#if 0
//�ṹ���������Ĳ��� 
#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	int age;
	int score;
};
void printStu_1(struct Student stu){
	stu.age =18;
	cout<<"���� : "<<stu.name<<endl;
	cout<<"���� : "<<stu.age<<endl;
	cout<<"�ɼ� : "<<stu.score<<endl;
}
void printStu_2(struct Student* p){
	p->age=18;
	cout<<"���� : "<<p->name<<endl;
	cout<<"���� : "<<p->age<<endl;
	cout<<"�ɼ� : "<<p->score<<endl;
}
int main()
{
	struct Student stu={"����",19,80};
	printStu_1(stu);
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"���� : "<<stu.name<<endl;
	cout<<"���� : "<<stu.age<<endl;
	cout<<"�ɼ� : "<<stu.score<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	printStu_2(&stu);
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"���� : "<<stu.name<<endl;
	cout<<"���� : "<<stu.age<<endl;
	cout<<"�ɼ� : "<<stu.score<<endl;
	return 0;
}
#endif

