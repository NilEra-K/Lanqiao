/*******************************
	本节内容:
	Vector互换容器 
	函数原型:
	//将vec与本身的元素互换  
	swap(vec); 
*******************************/
#if 1
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>& v)
{
	vector<int>::iterator it=v.begin();
	for(	;it!=v.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
}
void test_1()
{
	cout<<"交换前"<<endl;
	vector<int> v1;
	for(int i=1;i<10;i++){
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int> v2;
	for(int i=9;i>=0;i--){
		v2.push_back(i);
	}
	printVector(v2);
	
	cout<<"交换后"<<endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	/*也可以使用  
	swap(v1,v2);
	printVector(v1);
	printVector(v2);
	*/	
}
void test_2()
{
	vector<int> v;
	for(int i=0;i<100000;i++){
		v.push_back(i);
	}
	
	cout<<"v的容量 :"<<v.capacity()<<endl;
	cout<<"v的大小 :"<<v.size()<<endl;
	
	v.resize(3); 
	cout<<"v的容量 :"<<v.capacity()<<endl;
	cout<<"v的大小 :"<<v.size()<<endl;
	
	//收缩内存 
	cout<<"内存收缩后---"<<endl; 
	vector<int>(v).swap(v); 
	//vector<int>(v)//匿名对象,用拷贝构造拷贝了v的内容,程序运行结束后会自动释放 
	//swap(v)		//交换 
	cout<<"v的容量 :"<<v.capacity()<<endl;
	cout<<"v的大小 :"<<v.size()<<endl;

}
int main()
{
	test_1();
	test_2();
	return 0;
}
#endif
