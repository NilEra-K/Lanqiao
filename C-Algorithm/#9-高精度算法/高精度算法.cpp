/*�߾����㷨*/
#if 1
#define Maxsize 10000000
#include <bits/stdc++.h>
using namespace std;
/*�߾��ȼӷ�*/
string add(string a, string b) //ֻ�������Ǹ��������
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
/*�߾��ȼ���*/
string sub(string a, string b) //ֻ�޴�ķǸ�������С�ķǸ�����
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
/*�߾��ȳ˷�*/
/*1.�߾��ȳ��Ը߾��������㷨*/
string mul(string a, string b) //�߾��ȳ˷�a,b,��Ϊ�Ǹ�����
{
	const int L = 1e5;
	string s;
	int na[L], nb[L], nc[L], La = a.size(), Lb = b.size(); // na�洢��������nb�洢������nc�洢��
	fill(na, na + L, 0);
	fill(nb, nb + L, 0);
	fill(nc, nc + L, 0); //��na,nb,nc����Ϊ0
	for (int i = La - 1; i >= 0; i--)
		na[La - i] = a[i] - '0'; //���ַ�����ʾ�Ĵ�������ת��i���������ʾ�Ĵ�������
	for (int i = Lb - 1; i >= 0; i--)
		nb[Lb - i] = b[i] - '0';
	for (int i = 1; i <= La; i++)
		for (int j = 1; j <= Lb; j++)
			nc[i + j - 1] += na[i] * nb[j]; // a�ĵ�iλ����b�ĵ�jλΪ���ĵ�i+j-1λ���Ȳ����ǽ�λ��
	for (int i = 1; i <= La + Lb; i++)
		nc[i + 1] += nc[i] / 10, nc[i] %= 10; //ͳһ�����λ
	if (nc[La + Lb])
		s += nc[La + Lb] + '0'; //�жϵ�i+jλ�ϵ������ǲ���0
	for (int i = La + Lb - 1; i >= 1; i--)
		s += nc[i] + '0'; //����������ת���ַ���
	return s;
}
/*2.�߾��ȳ��Ը߾���FFT�Ż��㷨*/

/*3.�߾��ȳ��Ե�����*/
string mul(string a, int b) //�߾���a�˵�����b
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
/*�߾��ȳ���*/
int sub(int *a, int *b, int La, int Lb)
{
	if (La < Lb)
		return -1; //���aС��b���򷵻�-1
	if (La == Lb)
	{
		for (int i = La - 1; i >= 0; i--)
			if (a[i] > b[i])
				break;
			else if (a[i] < b[i])
				return -1; //���aС��b���򷵻�-1
	}
	for (int i = 0; i < La; i++) //�߾��ȼ���
	{
		a[i] -= b[i];
		if (a[i] < 0)
			a[i] += 10, a[i + 1]--;
	}
	for (int i = La - 1; i >= 0; i--)
		if (a[i])
			return i + 1; //���ز��λ��
	return 0;			  //���ز��λ��
}
string div(string n1, string n2, int nn)
// n1,n2���ַ�����ʾ�ı�����������,nn��ѡ�񷵻��̻�������
{
	const int L = 1e5;
	string s, v; // s����,v������
	int a[L], b[L], r[L], La = n1.size(), Lb = n2.size(), i, tp = La;
	// a��b�����������ʾ��������������tp���汻�����ĳ���
	fill(a, a + L, 0);
	fill(b, b + L, 0);
	fill(r, r + L, 0); //����Ԫ�ض���Ϊ0
	for (i = La - 1; i >= 0; i--)
		a[La - 1 - i] = n1[i] - '0';
	for (i = Lb - 1; i >= 0; i--)
		b[Lb - 1 - i] = n2[i] - '0';
	if (La < Lb || (La == Lb && n1 < n2))
	{
		// cout<<0<<endl;
		return n1;
	}								  //���a<b,����Ϊ0������Ϊ������
	int t = La - Lb;				  //�������ͳ�����λ��֮��
	for (int i = La - 1; i >= 0; i--) //����������10^t��
		if (i >= t)
			b[i] = b[i - t];
		else
			b[i] = 0;
	Lb = La;
	for (int j = 0; j <= t; j++)
	{
		int temp;
		while ((temp = sub(a, b + j, La, Lb - j)) >= 0) //����������ȳ����������
		{
			La = temp;
			r[t - j]++;
		}
	}
	for (i = 0; i < L - 10; i++)
		r[i + 1] += r[i] / 10, r[i] %= 10; //ͳһ�����λ
	while (!r[i])
		i--; //�����������ʾ����ת�����ַ�����ʾ��
	while (i >= 0)
		s += r[i--] + '0';
	// cout<<s<<endl;
	i = tp;
	while (!a[i])
		i--; //�����������ʾ������ת�����ַ�����ʾ��</span>
	while (i >= 0)
		v += a[i--] + '0';
	if (v.empty())
		v = "0";
	// cout<<v<<endl;
	if (nn == 1)
		return s; //������
	if (nn == 2)
		return v; //��������
}
/*�߾��ȳ��Ե�����*/
string div(string a, int b) //�߾���a���Ե�����b
{
	string r, ans;
	int d = 0;
	if (a == "0")
		return a; //����
	for (int i = 0; i < a.size(); i++)
	{
		r += (d * 10 + a[i] - '0') / b + '0'; //�����
		d = (d * 10 + (a[i] - '0')) % b;	  //�������
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
/*�߾���ȡģ*/
int mod(string a, int b) //�߾���a���Ե�����b
{
	int d = 0;
	for (int i = 0; i < a.size(); i++)
		d = (d * 10 + (a[i] - '0')) % b; //�������
	return d;
}
/*�߾��Ƚ׳�*/
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<mul(a,b);
	
	return 0;
}
#endif
