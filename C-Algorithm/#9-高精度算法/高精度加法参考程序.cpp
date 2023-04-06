/*高精度算法*/
#if 1
#define Maxsize 10000000
#include <bits/stdc++.h>
using namespace std;
/*高精度加法*/
string add(string num_1, string num_2) //只限两个非负整数相加
{
	const int L = 1e5;
	string ans;
	int CharToInt_num_1[L] = {0};
    int CharToInt_num_2[L] = {0};
	int len_num_1 = num_1.size();
    int len_num_2 = num_2.size();
	for (int i = 0; i < len_num_1; i++)
		CharToInt_num_1[len_num_1 - 1 - i] = num_1[i] - '0';
	for (int i = 0; i < len_num_2; i++)
		CharToInt_num_2[len_num_2 - 1 - i] = num_2[i] - '0';
    if(len_num_1>len_num_2)
    {
        lmax=len_num_1;
    }else{
        lmax=len_num_2;
    }
	for (int i = 0; i < lmax; i++)
		CharToInt_num_1[i] += CharToInt_num_2[i], CharToInt_num_1[i + 1] += CharToInt_num_1[i] / 10, CharToInt_num_1[i] %= 10;
	if (CharToInt_num_1[lmax])
		lmax++;
	for (int i = lmax - 1; i >= 0; i--)
		ans += CharToInt_num_1[i] + '0';
	return ans;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
#endif

