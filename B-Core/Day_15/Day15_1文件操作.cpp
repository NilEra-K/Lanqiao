/*******************
	本节内容: 
	文件  
*******************/
#if 0
#include<bits/stdc++.h>
using namespace std;
/*
从用户或者操作系统使用的角度(逻辑上)把文件分为:
文本文件 :基于字符编码的文件  
二进制文件: 基于值编码的文件  
程序运行时产生的数据属于临时数据,程序一旦运行结束都会被释放
通过文件可以将数据持久化 

C++对文件的操作需要包含头文件 #include<fstream>

C++操作文件的三大类:
ofstream 写操作 
ifstream 读操作 
fstream  读写操作  
*/
int main()
{
	/*写文件操作步骤*/
	//1.创建流对象 
	ofstream ofs; 
	
	//2.打开文件 
	ofs.open("Day15文件操作指定文件夹/test.txt",ios::out);//
	
	//3.写数据  
	ofs << "姓名:张三"<<endl; 
	ofs << "性别:男"<<endl; 
	ofs << "年龄:18"<<endl; 
	
	//4.关闭文件  
	ofs.close();
	
	/***********************************************
	文件打开方式: 
		ios::in			为读文件而打开文件 
		ios::out		为写文件而打开文件 
		ios::ate		初始位置文件尾 
		ios::app		追加方式写文件 
		ios::trunc		如果文件存在先删除,再创建 
		ios::binary		二进制方式 
	***注意
	文件打开方式可以配合使用,利用|操作符 
	如:用二进制方式写文件 ios::binary|ios::out	
	***********************************************/
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//1.创建流对象  
	ifstream ifs;
	//2.打开文件并判断文件是否打开成功 
	ifs.open("Day15文件操作指定文件夹/test.txt",ios::in);
	if(!ifs.is_open())
	{
		cout<<"文件打开失败!"<<endl;
		return -1; 
	} 
	//3.读数据 
	
	//第一种方式: /*比较推荐第一种读数据方式*/
	char buf_1[1024] ={0}; 
	while(ifs>>buf_1)
	{
		cout<< buf_1 <<endl;
	}
	ifs.close();
	
	//第二种方式:
	char buf_2[1024]={0};
	while(ifs.getline(buf_2,sizeof(buf_2)))
	{
		cout<< buf_2 <<endl;
	} 
	ifs.close();
	
	//第三种方式: 
	string buf_3;
	while(getline(ifs,buf_3))
	{
		cout<<buf_3<<endl;
	} 
	ifs.close();
	
	//第四种方式:
	char c;
	while((c=ifs.get())!=EOF )//EOF的含义:文件尾 
	{
		cout<<c; 
	} 
	
	//4.关闭文件 
	ifs.close();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	char m_Name[64];
	int m_Age;
};
int main()
{
	ofstream ofs("Person.txt",ios::binary|ios::out);
	Person p={"张三",18}; 
	ofs.write((const char*)&p,sizeof(p));
	ofs.close();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	char m_Name[64];
	int m_Age;
};
int main()
{
	ifstream ifs("Person.txt",ios::binary | ios::in);
	if(!ifs.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return -1;
	}
	Person p;
	ifs.read((char*)&p,sizeof(p));
	cout<<p.m_name<<" "<<p.m_Age<<endl;
	ifs.close(); 
	return 0;
}
#endif
