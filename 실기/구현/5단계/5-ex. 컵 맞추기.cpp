#include<bits/stdc++.h>
using namespace std;
int cnt[4]; // cnt[i] = �ʱ� ��ġ�� i���� �ſ� ���� �־��� ���, ���ð� ���� ���� Ƚ��
int where[4]; // ���� x�� ���� �ʱ� ��ġ�� �� ���̾�����
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	where[1] = 1; where[2] = 2; where[3] = 3;
	for(int i=0; i<n; i++)
	{
		int a,b,c; cin>>a>>b>>c;
		swap(where[a], where[b]);
		cnt[where[c]]++;
	}
	cout<<max({cnt[1], cnt[2], cnt[3]});
}
