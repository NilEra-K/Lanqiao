/************************************************************
	本节内容:
	STL基本概念:
	STL(Standard Template Library,标准模板库) 
	STL从广义上分为:
	-容器(container)
	-算法(algorithm)
	-迭代器(iterator) 
	容器和算法之间通过迭代器进行无缝连接 
	STL几乎所有的代码都采用了模板类或者模板函数  

	STL大体分为六大组件,分别是:
	*容器:各种数据结构,如vector list...用于存放数据 
	*算法:各种常用算法,如sort find... 
	*迭代器:扮演了容器与算法之间的胶合剂. 
	*仿函数:行为类似函数,可作为算法的某种策略  
	*适配器:一种用来修饰容器或者仿函数或迭代器接口的东西  
	*空间配置器: 负责空间的配置与管理  
	
	STL容器就是将运用最广泛的一些数据结构实现出来 
	这些容器分为以下两种： 
	*序列式容器:强调值的排序,序列式容器中的每个元素均有固 
	定的位置  
	*关联式容器:二叉树结构,各元素之间没有严格的物理上的顺 
	序关系  
	
	STL算法就是有限的步骤,解决逻辑或数学上的问题
	算法分为两种:
	*质变算法:是指运算过程中会更改却见内的元素的内容.例如 
	拷贝,替换,删除... 
	*非质变算法: 是指运算过程中不会更改区间内的元素内容.
	例如查找,计数,遍历,寻找极值...
	
	STL迭代器就是一种能够依序寻访某个容器所含的各个元素,而 
	又无需暴露该容器内部表示方式的方法
	每个容器都已自己专属的迭代器 
	迭代器使用非常类似于指针,初学阶段我们可以先理解迭代 
	器为指针 
	迭代器种类:
	*输入迭代器:对数据的只读访问  
	*输出迭代器:对数据的只写访问 
	*前向迭代器:读写操作,并能向前推进迭代器  
	*双向迭代器:读写操作,并能向前和向后操作 
	*随机访问迭代器:读写操作,可以以跳跃的方式访问任意数据,功 
	能最强的迭代器  
************************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	return 0;
}
#endif
