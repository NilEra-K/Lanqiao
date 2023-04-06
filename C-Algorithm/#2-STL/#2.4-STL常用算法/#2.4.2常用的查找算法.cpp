/*****************************************************
	本节内容:
	常用算法--查找 
	find			//查找元素  
	//找到返回指定位置迭代器,找不到返回结束迭代器 
	find(iterator beg,iterator end,value);
----begin	开始迭代器 
----end		结束迭代器 
----value	查找的元素 
	
	find_if 		//按条件查找元素  
	//找到返回指定位置迭代器,找不到返回结束迭代器 
	find_if(iterator begin,iterator end,_Pred);
----begin	开始迭代器 
----end		结束迭代器 
----_Pred	函数或者谓词(返回bool类型的仿函数)  

	adjacent_find	//查找相邻重复元素  
	//查找相邻重复元素,返回相邻元素的第一个位置的迭代器  
	adjacent_find(iterator begin,iterator end);
----begin	开始迭代器	
----end		结束迭代器 
 
	binary_serach	//二分查找法  
	//查找指定元素,找到返回true,否则返回false 
	//在无需序列中不可用  
	binary_serach(iterator begin,iterator end,value);  
----begin	开始迭代器 
----end		结束迭代器 
----value	查找的元素 

	count			//统计元素个数  
	//统计自定义数据类型的时候,需要配合重载operator== 
	count(iterator begin,iterator end,value);
----begin	开始迭代器 
----end		结束迭代器 
----value	统计的元素 

	count_if 		//按条件统计元素个数 
	count_if(iterator begin,iterator end,_Pred);
----begin	开始迭代器 
----end		结束迭代器 
----_Pred	统计的元素 
	 
******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;
//find测试案例_1 
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i+1);

	}
	vector<int>::iterator it=find(v.begin(),v.end(),5);
	if(it==v.end()){
		cout<<"没有找到!"<<endl; 
	}else{
		cout<<"找到 : "<< *it<<endl;
	}
} 
//find测试案例_2 
class Person{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	bool operator==(const Person p)
	{
		if(this->m_Name==p.m_Name&&this->m_Age==p.m_Age){
			return true;
		}else{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test_2()
{
	vector<Person> v;
	
	Person p1("aaa",10);	v.push_back(p1);
	Person p2("bbb",20);	v.push_back(p2);
	Person p3("ccc",30);	v.push_back(p3);
	Person p4("ddd",40);	v.push_back(p4);
	vector<Person>::iterator it=find(v.begin(),v.end(),p2);
	if(it==v.end()){
		cout<<"没有找到!"<<endl;
	}else{
		cout<<"找到姓名:"<<it->m_Name<<" 年龄: "<<it->m_Age<<endl; 
	}
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
class GreaterFive{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
void test_1(){
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i+1);
	}
	vector<int>::iterator it=find_if(v.begin(),v.end(),GreaterFive());
	if(it ==v.end()){
		cout<<"没有找到!"<<endl; 
	}else{
		cout<<"找到大于5的数字 : "<<*it<<endl; 
	}
}
int main()
{	
	test_1();
	return 0;
}
#endif 

#if 0
#include<bits/stdc++.h>
using namespace std;
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);
	
	//查找相邻重复元素 
	vector<int>::iterator it=adjacent_find(v.begin(),v.end());
	if(it ==v.end()){
		cout<<"找不到!"<<endl;
	}else{
		cout<<"找到相邻重复元素为 :"<<*it<<endl;
	}
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
void test_1()
{
	vector<int> v;
	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	//二分查找 
	bool ret=binary_search(v.begin(),v.end(),2);
	if(ret){
		cout<<"找到了!"<<endl;
	}else{
		cout<<"未找到!"<<endl;
	}
}
int main()
{
	test_1();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num=count(v.begin(),v.end(),4);
	cout<<"4的个数为:"<<num<<endl;
} 
int main()
{
	test_1();
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
class Greater4{
public:
	bool operator()(int val)
	{
		return val>=4;
	}
};
void test_1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num=count_if(v.begin(),v.end(),Greater4());
	cout<<"大于4的个数为 : "<<num<<endl;
}
int main()
{
	test_1();
	return 0;
}
#endif
