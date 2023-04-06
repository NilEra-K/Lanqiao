/*高精度算法*/
#if 1
#define Maxsize 10000000
#include <bits/stdc++.h>
using namespace std;
/*高精度加法*/
string add(string a, string b) //只限两个非负整数相加
{
	const int L = 1e5;
	string ans;
	int na[L] = {0}, nb[L] = {0};
	int la = a.size(), lb = b.size();
	for (int i = 0; i < la; i++)
		na[la - 1 - i] = a[i] - '0';
	for (int i = 0; i < lb; i++)
		nb[lb - 1 - i] = b[i] - '0';
	int lmax = la > lb ? la : lb;
	for (int i = 0; i < lmax; i++)
		na[i] += nb[i], na[i + 1] += na[i] / 10, na[i] %= 10;
	if (na[lmax])
		lmax++;
	for (int i = lmax - 1; i >= 0; i--)
		ans += na[i] + '0';
	return ans;
}
/*高精度减法*/
string sub(string a, string b) //只限大的非负整数减小的非负整数
{
	const int L = 1e5;
	string ans;
	int na[L] = {0}, nb[L] = {0};
	int la = a.size(), lb = b.size();
	for (int i = 0; i < la; i++)
		na[la - 1 - i] = a[i] - '0';
	for (int i = 0; i < lb; i++)
		nb[lb - 1 - i] = b[i] - '0';
	int lmax = la > lb ? la : lb;
	for (int i = 0; i < lmax; i++)
	{
		na[i] -= nb[i];
		if (na[i] < 0)
			na[i] += 10, na[i + 1]--;
	}
	while (!na[--lmax] && lmax > 0)
		;
	lmax++;
	for (int i = lmax - 1; i >= 0; i--)
		ans += na[i] + '0';
	return ans;
}
/*高精度乘法*/
/*1.高精度乘以高精度朴素算法*/
string mul(string a, string b) //高精度乘法a,b,均为非负整数
{
	const int L = 1e5;
	string s;
	int na[L], nb[L], nc[L], La = a.size(), Lb = b.size(); // na存储被乘数，nb存储乘数，nc存储积
	fill(na, na + L, 0);
	fill(nb, nb + L, 0);
	fill(nc, nc + L, 0); //将na,nb,nc都置为0
	for (int i = La - 1; i >= 0; i--)
		na[La - i] = a[i] - '0'; //将字符串表示的大整形数转成i整形数组表示的大整形数
	for (int i = Lb - 1; i >= 0; i--)
		nb[Lb - i] = b[i] - '0';
	for (int i = 1; i <= La; i++)
		for (int j = 1; j <= Lb; j++)
			nc[i + j - 1] += na[i] * nb[j]; // a的第i位乘以b的第j位为积的第i+j-1位（先不考虑进位）
	for (int i = 1; i <= La + Lb; i++)
		nc[i + 1] += nc[i] / 10, nc[i] %= 10; //统一处理进位
	if (nc[La + Lb])
		s += nc[La + Lb] + '0'; //判断第i+j位上的数字是不是0
	for (int i = La + Lb - 1; i >= 1; i--)
		s += nc[i] + '0'; //将整形数组转成字符串
	return s;
}
/*2.高精度乘以高精度FFT优化算法*/

/*3.高精度乘以单精度*/
string mul(string a, int b) //高精度a乘单精度b
{
	const int L = 100005;
	int na[L];
	string ans;
	int La = a.size();
	fill(na, na + L, 0);
	for (int i = La - 1; i >= 0; i--)
		na[La - i - 1] = a[i] - '0';
	int w = 0;
	for (int i = 0; i < La; i++)
		na[i] = na[i] * b + w, w = na[i] / 10, na[i] = na[i] % 10;
	while (w)
		na[La++] = w % 10, w /= 10;
	La--;
	while (La >= 0)
		ans += na[La--] + '0';
	return ans;
}
/*高精度除法*/
int sub(int *a, int *b, int La, int Lb)
{
	if (La < Lb)
		return -1; //如果a小于b，则返回-1
	if (La == Lb)
	{
		for (int i = La - 1; i >= 0; i--)
			if (a[i] > b[i])
				break;
			else if (a[i] < b[i])
				return -1; //如果a小于b，则返回-1
	}
	for (int i = 0; i < La; i++) //高精度减法
	{
		a[i] -= b[i];
		if (a[i] < 0)
			a[i] += 10, a[i + 1]--;
	}
	for (int i = La - 1; i >= 0; i--)
		if (a[i])
			return i + 1; //返回差的位数
	return 0;			  //返回差的位数
}
string div(string n1, string n2, int nn)
// n1,n2是字符串表示的被除数，除数,nn是选择返回商还是余数
{
	const int L = 1e5;
	string s, v; // s存商,v存余数
	int a[L], b[L], r[L], La = n1.size(), Lb = n2.size(), i, tp = La;
	// a，b是整形数组表示被除数，除数，tp保存被除数的长度
	fill(a, a + L, 0);
	fill(b, b + L, 0);
	fill(r, r + L, 0); //数组元素都置为0
	for (i = La - 1; i >= 0; i--)
		a[La - 1 - i] = n1[i] - '0';
	for (i = Lb - 1; i >= 0; i--)
		b[Lb - 1 - i] = n2[i] - '0';
	if (La < Lb || (La == Lb && n1 < n2))
	{
		// cout<<0<<endl;
		return n1;
	}								  //如果a<b,则商为0，余数为被除数
	int t = La - Lb;				  //除被数和除数的位数之差
	for (int i = La - 1; i >= 0; i--) //将除数扩大10^t倍
		if (i >= t)
			b[i] = b[i - t];
		else
			b[i] = 0;
	Lb = La;
	for (int j = 0; j <= t; j++)
	{
		int temp;
		while ((temp = sub(a, b + j, La, Lb - j)) >= 0) //如果被除数比除数大继续减
		{
			La = temp;
			r[t - j]++;
		}
	}
	for (i = 0; i < L - 10; i++)
		r[i + 1] += r[i] / 10, r[i] %= 10; //统一处理进位
	while (!r[i])
		i--; //将整形数组表示的商转化成字符串表示的
	while (i >= 0)
		s += r[i--] + '0';
	// cout<<s<<endl;
	i = tp;
	while (!a[i])
		i--; //将整形数组表示的余数转化成字符串表示的</span>
	while (i >= 0)
		v += a[i--] + '0';
	if (v.empty())
		v = "0";
	// cout<<v<<endl;
	if (nn == 1)
		return s; //返回商
	if (nn == 2)
		return v; //返回余数
}
/*高精度除以单精度*/
string div(string a, int b) //高精度a除以单精度b
{
	string r, ans;
	int d = 0;
	if (a == "0")
		return a; //特判
	for (int i = 0; i < a.size(); i++)
	{
		r += (d * 10 + a[i] - '0') / b + '0'; //求出商
		d = (d * 10 + (a[i] - '0')) % b;	  //求出余数
	}
	int p = 0;
	for (int i = 0; i < r.size(); i++)
		if (r[i] != '0')
		{
			p = i;
			break;
		}
	return r.substr(p);
}
/*高精度取模*/
int mod(string a, int b) //高精度a除以单精度b
{
	int d = 0;
	for (int i = 0; i < a.size(); i++)
		d = (d * 10 + (a[i] - '0')) % b; //求出余数
	return d;
}
/*高精度阶乘*/
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<mul(a,b);
	
	return 0;
}
#endif
