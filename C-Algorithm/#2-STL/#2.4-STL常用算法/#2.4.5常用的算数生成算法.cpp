/*****************************************************
	��������:
	�����㷨--���������㷨 
	����С���㷨,ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>
	
	accumulate	//��������Ԫ���ۼ��ܺ� 
	accumulate(iterator begin,iterator end,value);
----begin	��ʼ������ 
----end		���������� 
----value	��ʼֵ 	
	
	fill		//�����������Ԫ�� 
	fill(iterator begin,iterator end,value); 
----begin	��ʼ������ 
----end		���������� 
----value	����ֵ  	

******************************************************/
#if 0
#include<bits/stdc++.h>
using namespace std;

void test_1()
{
	vector<int> v;
	for(int i=0;i<=100;i++){
		v.push_back(i);
	}
	//�������Ǽ�����1+2+3+4+...+100���ܺ� 
	int total =accumulate(v.begin(),v.end(),0);
	cout<<"total = "<<total<<endl;
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

class myPrint{
public:
	void operator()(int val)
	{
		cout<<val<<' ';
	}
};
void test_1()
{
	vector<int> v;
	v.resize(10);
	//��� 
	fill(v.begin(),v.end(),100);
	for_each(v.begin(),v.end(),myPrint());
	cout<<endl; 
}
int main()
{
	test_1();
	return 0;
}
#endif 
