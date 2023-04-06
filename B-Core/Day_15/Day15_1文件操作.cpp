/*******************
	��������: 
	�ļ�  
*******************/
#if 0
#include<bits/stdc++.h>
using namespace std;
/*
���û����߲���ϵͳʹ�õĽǶ�(�߼���)���ļ���Ϊ:
�ı��ļ� :�����ַ�������ļ�  
�������ļ�: ����ֵ������ļ�  
��������ʱ����������������ʱ����,����һ�����н������ᱻ�ͷ�
ͨ���ļ����Խ����ݳ־û� 

C++���ļ��Ĳ�����Ҫ����ͷ�ļ� #include<fstream>

C++�����ļ���������:
ofstream д���� 
ifstream ������ 
fstream  ��д����  
*/
int main()
{
	/*д�ļ���������*/
	//1.���������� 
	ofstream ofs; 
	
	//2.���ļ� 
	ofs.open("Day15�ļ�����ָ���ļ���/test.txt",ios::out);//
	
	//3.д����  
	ofs << "����:����"<<endl; 
	ofs << "�Ա�:��"<<endl; 
	ofs << "����:18"<<endl; 
	
	//4.�ر��ļ�  
	ofs.close();
	
	/***********************************************
	�ļ��򿪷�ʽ: 
		ios::in			Ϊ���ļ������ļ� 
		ios::out		Ϊд�ļ������ļ� 
		ios::ate		��ʼλ���ļ�β 
		ios::app		׷�ӷ�ʽд�ļ� 
		ios::trunc		����ļ�������ɾ��,�ٴ��� 
		ios::binary		�����Ʒ�ʽ 
	***ע��
	�ļ��򿪷�ʽ�������ʹ��,����|������ 
	��:�ö����Ʒ�ʽд�ļ� ios::binary|ios::out	
	***********************************************/
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//1.����������  
	ifstream ifs;
	//2.���ļ����ж��ļ��Ƿ�򿪳ɹ� 
	ifs.open("Day15�ļ�����ָ���ļ���/test.txt",ios::in);
	if(!ifs.is_open())
	{
		cout<<"�ļ���ʧ��!"<<endl;
		return -1; 
	} 
	//3.������ 
	
	//��һ�ַ�ʽ: /*�Ƚ��Ƽ���һ�ֶ����ݷ�ʽ*/
	char buf_1[1024] ={0}; 
	while(ifs>>buf_1)
	{
		cout<< buf_1 <<endl;
	}
	ifs.close();
	
	//�ڶ��ַ�ʽ:
	char buf_2[1024]={0};
	while(ifs.getline(buf_2,sizeof(buf_2)))
	{
		cout<< buf_2 <<endl;
	} 
	ifs.close();
	
	//�����ַ�ʽ: 
	string buf_3;
	while(getline(ifs,buf_3))
	{
		cout<<buf_3<<endl;
	} 
	ifs.close();
	
	//�����ַ�ʽ:
	char c;
	while((c=ifs.get())!=EOF )//EOF�ĺ���:�ļ�β 
	{
		cout<<c; 
	} 
	
	//4.�ر��ļ� 
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
	Person p={"����",18}; 
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
		cout<<"�ļ���ʧ��"<<endl;
		return -1;
	}
	Person p;
	ifs.read((char*)&p,sizeof(p));
	cout<<p.m_name<<" "<<p.m_Age<<endl;
	ifs.close(); 
	return 0;
}
#endif
