/***********************************************
	��������:
	Map&Multimap
	Map&Multimap��������
	Map������Ԫ�ض���pair
	pair�е�һ��Ԫ��Ϊkey(��ֵ),���������� 
	�ڶ���Ԫ��Ϊvalue(ʵֵ)
	**����ȷ�:
	key��ֵ:�����QQ�� 
	valueʵֵ:����QQ�� 
	���QQ���ǲ���������ĵ� 
	�������QQ���ǿ���������ĵ� 
	
	����Ԫ�ض������Ԫ�صļ�ֵ�Զ����� 
	
	����:Map/Multimap���ڹ���ʽ���� 
	�ŵ�:
	���Ը���keyֵ�����ҵ� valueֵ 
	Map&Multimap����:
	Map���������������ظ��� keyֵԪ��
	Multimap�������������ظ��� keyֵԪ�� 
	
	Map��������͸�ֵ 
	����ԭ��:
	map<T1,T2> mp;
	map(const map &mp);
	map& operator=(const map &mp);
	
	Map������С�ͽ��� 
	����ԭ��:
	size();
	empty();
	swap(st);
	
	Map���������ɾ�� 
	����ԭ��:
	insert(elem);
	clear();
	erase(pos);
	erase(begin,end);
	erase(key);//ɾ��������ֵΪkey�ĺ���  
	
	Map�������Һ�ͳ�� 
	����ԭ��:
	find();
	count(key); 
	
	Map��������  
	����ԭ��:
	sort();
***********************************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void PrintMap(map<int,int>& m)
{
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		cout<<"Key = "<<it->first<<" Value = "<<it->second<<endl;
	}
}
void test_1()
{
	map<int,int> m;
	//<��ֵ,ʵֵ> 
	m.insert(pair<int,int>(3,20));
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(2,20));
	PrintMap(m);
}
int main()
{
	test_1();
	return 0;
}
#endif
