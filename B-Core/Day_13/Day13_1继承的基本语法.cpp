/***********************************
	��������:
	-�̳�-
	�¼���ĳ�Ա����ӵ����һ���Ĺ���
	�������Լ������� 
	���ʱ�����ǿ������ü̳м���
	�����ظ����� 
	
	�﷨:
	class A:public B;
	A��Ϊ���� �� ������ 
	B��Ϊ���� �� ���� 
	�ӻ���̳й����ı����乲��
	�������������� 
***********************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class BasePage{
public:
	void header()
	{
		cout<<"��վ����|˵˵&��־|��������|����(����ͷ��)"<<endl; 
	}
	void footer()
	{
		cout<<"������~��л�������(�����ײ�)"<<endl;
	}
	void left()
	{
		cout<<"���ߵ�����վ��|������...(���������б�)"<<endl; 
	}
};
//˵˵&��־ 
class Diary:public BasePage{
public:
	void content()
	{
		cout<<"˵˵&��־ҳ��"<<endl;
	}
}; 
/*ע��:�˴� Ctrl+C/Ctrl V*/
class Geeker:public BasePage{
public:
	void content()
	{
		cout<<"��������"<<endl;
	}
}; 
/*ע��:�˴� Ctrl+C/Ctrl V*/
class Search{
public:
	void header()
	{
		cout<<"��վ����|˵˵&��־|��������|����(����ͷ��)"<<endl; 
	}
	void footer()
	{
		cout<<"������~��л�������(�����ײ�)"<<endl;
	}
	void left()
	{
		cout<<"���ߵ�����վ��|������...(���������б�)"<<endl; 
	}
	void content()
	{
		cout<<"����"<<endl;
	}
};
void test_1()
{
	//˵˵&��־
	cout<<"˵˵&��־ҳ������:"<<endl; 
	Diary diary;
	diary.header();
	diary.footer();
	diary.left();
	diary.content();
	cout<<"-=-=-=-=-=-=-=-=-"<<endl;
	
	//��������
	cout<<"��������ҳ������:"<<endl; 
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
