#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	int drink = 0, cnt = 0;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(drink == x) // ���� ���ž� �ϴ� ���� drink�� ������ ���� x�� ���ٸ�
		{
			cnt++; 
			drink = (drink + 1) % 3; // 0->1 1->2 2->3->0
		}
	}
	cout<<cnt;
}
