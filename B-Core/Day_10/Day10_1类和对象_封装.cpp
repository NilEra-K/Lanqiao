/**************************
	�������� : 
	��Ͷ���_��װ 
	-=-=-=-=-=-=-=-=-=-
	�﷨ : 
	class ����
	{
	����Ȩ��:  
		��Ϊ:
		����:
	};
	
**************************/
#if 0
#define PI 3.14 
#include<bits/stdc++.h>
using namespace std;
//��װ����һ : 
//�����Ժ���Ϊд��һ��,��������

//������һ��Բ�� 
class Circle
{
public:
	//��Ϊ
	double calcC()/*�����ܳ� Calculate C*/
	{
		return 2 * PI * m_r;
	}
	//����
	int m_r;	
};
//���һ��ѧ����
class Student
{
public:
	//��Ϊ
	void setName(string name)
	{
		//�������� 
		m_name=name;
	} 
	void setID(int id)
	{
		//����ѧ�� 
		m_id=id;
	}
	void showStudent()
	{
		cout<<"���� : "<<m_name<<endl;
		cout<<"ѧ�� : "<<m_id<<endl;
	}
	//����:
	string m_name;
	int m_id;	
}; 
int main()
{
	//ͨ��Բ��,������һ��Բ��Ķ���c1
	//c1����һ�������Բ 
	Circle c1;
	c1.m_r=10;//��Բ����İ뾶���и�ֵ����
	double rst=c1.calcC();
	cout<<"Բ���ܳ�Ϊ : "<<rst<<endl; 
	
	Student s1;
	s1.m_name="��������";
	s1.m_id=250;
	cout<<"���� : "<<s1.m_name<<endl;
	cout<<"ѧ�� : "<<s1.m_id<<endl; 
	
	Student s2;
	string name;
	int id;
	cin>>name;
	cin>>id;
	s2.setName(name);
	s2.setID(id);
	s2.showStudent();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
//��װ����� : 
//�������ʱ,���԰����Ժ���Ϊ���ڲ�ͬ��Ȩ����,���Կ��� 
//����Ȩ�������� : 
// public 		����Ȩ��	���ڿ��Է��� ����Ҳ���Է��� 
// protected 	����Ȩ�� 	���ڿ��Է��� ���ⲻ���Է���
// private 		˽��Ȩ��	���ڿ��Է��� ����Ҳ���Է���
// ��ʱ�޷�����-����Ȩ��-��-˽��Ȩ��-������ (�̳�)  
// �ٸ�����:����Ȩ�� ->���ӿ��Է��ʸ��׵Ķ���
// 			˽��Ȩ�� ->���׵Ķ���̫��˽�������ڶ���Ҳ�޷����� 

//����һ������ : 
class Person
{
public:
	void func(){
		m_name="����";
		m_car ="������";
		m_psw =000; 	
	}
	void showPerson()
	{
		cout<<m_name<<endl;
		cout<<m_car<<endl;
		cout<<m_psw<<endl;
	}
	//���� ����Ȩ��
public:

	string m_name;
	//���� ����Ȩ�� 
protected:
	string m_car;
	//���п�����: 
private: 
	int m_psw;
};
//struct �� class������
/*
	��C++�� struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
	����:
	-struct	Ĭ��Ȩ��Ϊ����
	-class	Ĭ��Ȩ��Ϊ˽�� 
*/ 
int main()
{
	Person p;
	p.m_name="����";
	cout<<p.m_name<<endl;
	//���������д���ֱ���ʳ�������
	//����û�з���Ȩ��,����޷����� 
	//p.m_car="����";
	//p.m_psw="123"; 
	p.func();
	p.showPerson();
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
//structĬ��Ȩ�� public 
struct s1
{
	int m_s1;
};
//class Ĭ��Ȩ�� private 
class c1
{
	int m_c1;
};
int main()
{
	s1 S1;
	S1.m_s1=10;
	
	c1 C1;
	C1.m_c1=10;//�޷����� 
	return 0;
}
#endif

#if 0
#include<bits/stdc++.h>
using namespace std;
/*
	��Ա��������Ϊ˽��
	�ŵ� 1: �����г�Ա��������Ϊ˽��,�����Լ����ƶ�дȨ��
	�ŵ� 2: ����дȨ��,���ǿ��Լ�����ݵ���Ч�� 
*/
class Person{
public:
	//���� �ɶ���д
	string getName()
	{
		return m_name;	
	}
	void setName(string name)
	{
		m_name=name;
	}
	//���� ֻ�� 
	int getAge()
	{
		m_age=18;
		/*���ڵ���*/
		return m_age;
	}
	void setAge(int age)
	{
		if(age<0 || age>120){
			cout<<"������"<<endl;
			return;
		}
		m_age=age;
	}
	//���� ֻд 
	void setLover(string loverName)
	{
		m_lover =loverName;
	}
private:
	string m_name;	//���� �ɶ���д 
	int m_age;		//���� ֻ�� 
	string m_lover;	//���� ֻд 
};
int main()
{
	Person p;
	
	//��������
	p.setName("����");
	cout<<"���� : "<<p.getName()<<endl;
	//����
	int a;
	cin>>a;
	p.setAge(a);
	cout<<"���� : "<<p.getAge()<<endl;
	//����
	p.setLover("�Ծ�");
	return 0;
}
#endif


#if 0
#include<bits/stdc++.h>
using namespace std;
//�����������
//1.����һ����������
//2.�������
//3.�����Ϊ:��ȡ��������������
//4.�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���� 
class Cube{
public:
	//�� 
	void setL(int l)
	{
		m_L=l;
	}
	int getL()
	{
		return m_L;	
	}
	//��
	void setW(int w)
	{
		m_W=w;
	}
	int getW()
	{
		return m_W;	
	}
	//�� 
	void setH(int h)
	{
		m_H=h;
	}
	int getH()
	{
		return m_H;	
	}
	//��ȡ����������
	int calcS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;	
	}
	//��ȡ����������
	int calcV()
	{
		return m_L*m_W*m_H;
	}
	//���ó�Ա�����ж�c1 c2�Ƿ���� 
	bool isSameByClass(Cube& c)
	{
		if(m_L==c.getL()&&m_W==c.getW()&&m_H==c.getH()){
			return true;
		}else{
			return false;
		}
	}
private:
	int m_L;
	int m_W;
	int m_H; 
};
//����ȫ�ֺ����ж�c1 c2�Ƿ���� 
bool isSame(Cube& c1,Cube& c2)
{
	if(c1.getL()==c2.getL() && c1.getH()==c2.getH() && c1.getW()==c2.getW()){
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout<<"S[c1]= " <<c1.calcS()<<endl;
	cout<<"V[c1]= " <<c1.calcV()<<endl; 
	
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);
	cout<<"S[c2]= " <<c2.calcS()<<endl;
	cout<<"V[c2]= " <<c2.calcV()<<endl; 
	//����ȫ�ֺ����ж�c1 c2�Ƿ���� 
	if(isSame(c1,c2)){
		cout<<"C1=C2"<<endl;
	}else{
		cout<<"C1!=C2"<<endl;
	}
	//���ó�Ա�����ж�c1 c2�Ƿ���� 
	if(c1.isSameByClass(c2)){
		cout<<"C1=C2"<<endl;
	}else{
		cout<<"C1!=C2"<<endl;
	}
	
	return 0;
}
#endif

#if 1
#include<bits/stdc++.h>
using namespace std;
class Point{
public:
	//x�� 
	void setX(int X)
	{
		m_X=X;
	}
	int getX()
	{
		return m_X;
	}
	//y�� 
	void setY(int Y)
	{
		m_Y=Y;
	}
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
class Circle{
public:
	//�뾶
	void setR(int R)
	{
		m_R=R;
	}
	int getR()
	{
		return m_R;
	}
	//Բ��
	void setCenter(Point center)
	{
		m_Center=center;
	}
	Point getCenter()
	{
		return m_Center; 
	}
private:
	int m_R;
	//�����п�������һ������Ϊ�����еĳ�Ա
	Point m_Center; 
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c,Point& p)
{
	int distance=sqrt(pow(c.getCenter().getX()-p.getX(),2)+pow(c.getCenter().getY()-p.getY(),2));
	if(distance ==c.getR()){
		cout<<"����Բ��"<<endl;
	}else if(distance>c.getR()){
		cout<<"����Բ��"<<endl;
	}else{
		cout<<"����Բ��"<<endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	
	Point p;
	p.setX(10);
	p.setY(10);
	
	isInCircle(c,p);
	return 0;
}
#endif
