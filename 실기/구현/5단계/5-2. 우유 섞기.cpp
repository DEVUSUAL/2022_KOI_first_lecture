#include<bits/stdc++.h>
using namespace std;
int c[4], m[4];
int pour(int x, int y) // x�� y�� �״´�
{
	int totalmilk = m[x] + m[y];
	if(c[y] >= totalmilk) // ���� ������ �ѷ��� �絿�� y�� ���� ����
	{
		m[x] = 0;
		m[y] = totalmilk;
	}
	else // ������ �ѷ��� �絿�� y�� �� ���� ������
	{
		m[y] = c[y];
		m[x] = totalmilk - c[y];
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=3; i++) cin>>c[i]>>m[i];
	for(int i=1; i<=100; i++)
	{
		int now = (i+2)%3+1; // 1 2 3 1 2 3 1 2 3
		int next = i%3 + 1; // 2 3 1 2 3 1 2 3 1
		pour(now, next);
		//now next % ���� ������ �׳� now=1, next=2 ���� �����ؼ� now++, next++, if(now==4) now=1 if(next==4) next=1 �ص� �ȴ�.
	}
	cout<<m[1]<<'\n'<<m[2]<<'\n'<<m[3];
}
