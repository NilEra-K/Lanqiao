/******************************************************
	��������:
	��ģ����̳�
	*����ģ�������̳�ʱ,��Ҫע�����¼���:
	1.������̳еĸ�����һ����ģ��ʱ,������������ʱ�� 
	Ҫָ����������T������ 
	2.�����ָ��,�������޷�����������ڴ� 
	3.��������ָ��������T������,����Ҳ��Ҫ��Ϊ��ģ�� 
******************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
template<class T>
class Base{
	T m;
};
//ERROR:C++��������Ҫ����������ڴ�,����֪��������T������ 
//		�ſ������¼̳�  
//-->class Son:public Base{
//-->	/*ERROR*/
//-->};
class Son:public Base<int>{//����ָ��һ������ 
	
}; 
void test_1()
{
	Son c;
}

//�̳���ģ��,������T2ָ�������е�T���� 
template<class T1,class T2>
class Son2:public Base<T2>{
public:
	Son2()
	{
		cout<<typeid(T1).name()<<endl;
		cout<<typeid(T2).name()<<endl;
	}
};
void test_2()
{
	Son2<int,char> c3;
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
