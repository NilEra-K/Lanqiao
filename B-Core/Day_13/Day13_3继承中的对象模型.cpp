/**************************************************
	��������: 
	�̳��еĶ���ģ�� 
	����: �Ӹ���̳й����ĳ�Ա,��Щ�������������? 
**************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
class Base{
public:
	int m_A;
protected:
	int m_B;
private://˽�г�Աֻ�Ǳ�������,���ǻ��ǻ�̳���ȥ 
	int m_C;
}; 
//�����̳� 
class Son:public Base{
public:
	int m_D;
};
void test_1()
{
	cout<<"The Size of Son is : "<<sizeof(Son)<<endl;
	/*������ : 16 */
	//���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ  
	//cl /d1 reportSingleClassLayoutSon "NAME.cpp"���Կ�����Ĺ�ϵ  
}
int main()
{
	test_1();
	return 0;
}
#endif
