#if 1
#include<bits/stdc++.h>
using namespace std;

long long S(int n)
{
	if(n==1){
		return 1;
	}
	else
	{
		return n+S(n-1);	
	}
}
int main()
{
	int n;
	cin>>n;
	long long sum;
	sum=S(n);
	cout<<sum;
	system("calc");
	return 0;
}
#endif
