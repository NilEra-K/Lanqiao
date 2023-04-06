/*****************************************************
	��������:
	�ڽ���������
	����:STL�ڽ���һЩ�������� 
	����:�����º���,��ϵ�º���,�߼��º��� 
	
	�÷�:
	��Щ�º����������Ķ���,�÷���һ�㺯�� 
	��ȫ��ͬ 
	ʹ���ڽ���������,��Ҫ����ͷ�ļ�
	#include<functional>

	1.�����º��� ʵ���������� 
	template<class T>  T plus<T>		//�ӷ��º��� 
	template<class T>  T minus<T>		//�����º��� 
	template<class T>  T multiplies<T>	//�˷��º��� 
	template<class T>  T divides<T>		//�����º��� 
	template<class T>  T modulus<T>		//ȡģ�º��� 
	template<class T>  T negate<T>		//ȡ���º��� 
	����negate��һԪ����,�������Ƕ�Ԫ���� 
	 
	2.��ϵ�º��� ʵ�ֹ�ϵ�Ա�
	template<class T>  bool equal_to<T>		//����  
	template<class T>  bool not_equal_to<T>	//������  
	template<class T>  bool greater<T>		//���� 
	template<class T>  bool greater_equal<T>//���ڵ��� 
	template<class T>  bool less<T>			//С�� 
	template<class T>  bool less_equal<T>	//С�ڵ��� 
	��ϵ�º�������õľ���greater<>���� 
	
	3.�߼��º��� ʵ���߼�����  
	template<class T>  bool logical_and<T>	//���ڵ��� 
	template<class T>  bool logical_or<T>	//���ڵ��� 
	template<class T>  bool logical_not<T>	//���ڵ��� 
	 
*****************************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
//1.�����º��� ʵ���������� 
void test_1()
{
	negate<int> n;
	cout<<n(50)<<endl; 
} 
void test_2()
{
	plus<int> p;
	cout<<p(10,20)<<endl;
} 
//2.��ϵ�º��� ʵ�ֹ�ϵ�Ա�
class MyCompare{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};
void test_3()
{
	//�Լ�ʵ�ַº��� 
	sort(v.begin(),v.end(),MyCompare());
	//STL�ڽ��º��� ���ڷº���  
	sort(v.begin(),v.end(),greater<int>());
}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif 
