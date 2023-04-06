/*****************************************
	本节内容:
	结构体
	结构体语法:
	struct 结构体名称 {结构体成员列表}; 
	 
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
	//结构体变量的创建方式_1
	//struct 结构体名 变量名
	struct Student stu1;
	stu1.ID=1;
	stu1.name="张三";
	stu1.age=18;
	stu1.Cscore=100; 
	
	cout<<"学号 : "<<stu1.ID<<endl;
	cout<<"姓名 : "<<stu1.name<<endl;
	cout<<"年龄 : "<<stu1.age<<endl;
	cout<<"成绩 : "<<stu1.Cscore<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	//结构体变量的创建方式_2
	//struct 结构体名 变量名 ={赋值}
	struct Student stu2={2,"李四",19,80};
	cout<<"学号 : "<<stu2.ID<<endl;
	cout<<"姓名 : "<<stu2.name<<endl;
	cout<<"年龄 : "<<stu2.age<<endl;
	cout<<"成绩 : "<<stu2.Cscore<<endl;
	 
	return 0;
}
#endif

#if 0
/**********************
	新内容:
	结构体指针
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
	Student stu={1,"张三",19,90};
	struct Student* p=NULL;
	stu.age=18;
	p.Cscore=100;
	p->Cscore;//指针通过 -> 运算符来访问成员 
	//注意：' . '和' -> '的作用相同
	//其中  ' -> '是在指针的时候应用 
	
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
	t1.name="老王";
	t1.age=40;
	
	t1.stu.name="张三";
	t1.stu.age=19;
	t1.stu.score=80;
	//由此可以实现结构体嵌套结构体的操作 
	cout<<"教师编号 : "<<t1.id<<endl;
	cout<<"教师名称 : "<<t1.name<<endl; 
	cout<<"教师年龄 : "<<t1.age<<endl; 
	cout<<"教师学生名字 : "<<t1.stu.name<<endl; 
	cout<<"教师学生年龄 : "<<t1.stu.age<<endl; 
	cout<<"教师学生成绩 : "<<t1.stu.score<<endl; 
	
	return 0;
}
#endif

#if 0
//结构体做函数的参数 
#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	int age;
	int score;
};
void printStu_1(struct Student stu){
	stu.age =18;
	cout<<"姓名 : "<<stu.name<<endl;
	cout<<"年龄 : "<<stu.age<<endl;
	cout<<"成绩 : "<<stu.score<<endl;
}
void printStu_2(struct Student* p){
	p->age=18;
	cout<<"姓名 : "<<p->name<<endl;
	cout<<"年龄 : "<<p->age<<endl;
	cout<<"成绩 : "<<p->score<<endl;
}
int main()
{
	struct Student stu={"张三",19,80};
	printStu_1(stu);
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"姓名 : "<<stu.name<<endl;
	cout<<"年龄 : "<<stu.age<<endl;
	cout<<"成绩 : "<<stu.score<<endl;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	printStu_2(&stu);
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"姓名 : "<<stu.name<<endl;
	cout<<"年龄 : "<<stu.age<<endl;
	cout<<"成绩 : "<<stu.score<<endl;
	return 0;
}
#endif

