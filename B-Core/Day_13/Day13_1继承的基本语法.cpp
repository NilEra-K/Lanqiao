/***********************************
	本节内容:
	-继承-
	下级别的成员除了拥有上一级的共性
	还具有自己的特性 
	这个时候我们考虑利用继承技术
	减少重复代码 
	
	语法:
	class A:public B;
	A类为子类 或 派生类 
	B类为父类 或 基类 
	从基类继承过来的表现其共性
	派生类表现其个性 
***********************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class BasePage{
public:
	void header()
	{
		cout<<"网站名称|说说&日志|极客生活|搜索(公共头部)"<<endl; 
	}
	void footer()
	{
		cout<<"到底啦~感谢您的浏览(公共底部)"<<endl;
	}
	void left()
	{
		cout<<"作者的其他站点|关于我...(公共分类列表)"<<endl; 
	}
};
//说说&日志 
class Diary:public BasePage{
public:
	void content()
	{
		cout<<"说说&日志页面"<<endl;
	}
}; 
/*注意:此处 Ctrl+C/Ctrl V*/
class Geeker:public BasePage{
public:
	void content()
	{
		cout<<"极客生活"<<endl;
	}
}; 
/*注意:此处 Ctrl+C/Ctrl V*/
class Search{
public:
	void header()
	{
		cout<<"网站名称|说说&日志|极客生活|搜索(公共头部)"<<endl; 
	}
	void footer()
	{
		cout<<"到底啦~感谢您的浏览(公共底部)"<<endl;
	}
	void left()
	{
		cout<<"作者的其他站点|关于我...(公共分类列表)"<<endl; 
	}
	void content()
	{
		cout<<"搜索"<<endl;
	}
};
void test_1()
{
	//说说&日志
	cout<<"说说&日志页面如下:"<<endl; 
	Diary diary;
	diary.header();
	diary.footer();
	diary.left();
	diary.content();
	cout<<"-=-=-=-=-=-=-=-=-"<<endl;
	
	//极客生活
	cout<<"极客生活页面如下:"<<endl; 
	Diary Geeker;
	Geeker.header();
	Geeker.footer();
	Geeker.left();
	Geeker.content();
	cout<<"-=-=-=-=-=-=-=-=-"<<endl; 
}
int main()
{
	test_1();
	return 0;
}
#endif
