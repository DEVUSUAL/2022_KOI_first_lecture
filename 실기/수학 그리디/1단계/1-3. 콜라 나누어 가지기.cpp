#include<bits/stdc++.h>
using namespace std;
int arr[10005];
int main()
{
	// ��ġ�� ������Լ� ���ڸ� ������Ը� �ű��.
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, sum=0; cin>>n;
	for(int i=0; i<n; i++) {cin>>arr[i]; sum += arr[i];}
	int avg = sum / n;
	int ans = 0;
	for(int i=0; i<n; i++) 
	{
		if(arr[i] > avg) ans += (arr[i]-avg);
	}
	cout<<ans;
}
