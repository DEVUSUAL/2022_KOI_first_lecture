#include<bits/stdc++.h>
using namespace std;
int rev(int x) // �־��� ���ڸ��� x�� ������ ���� ��ȯ�ϴ� �Լ�
{
	int a,b,c; // a,b,c�� ���� �����ڸ�, �����ڸ�, �����ڸ��� ������ ��
	a = x / 100; 
	b = (x / 10) % 10; 
	c = x % 10;
	return c*100 + b*10 + a; 
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int x,y; cin>>x>>y;
	int a = rev(x);
	int b = rev(y);
	cout << max(a,b); 
	/* ���� max �Լ��� �ͼ�ġ �ʴٸ�
	if(a<b) cout<<b;
	else cout<<a;
	�� ��ü�Ͽ��� �������.*/
}
