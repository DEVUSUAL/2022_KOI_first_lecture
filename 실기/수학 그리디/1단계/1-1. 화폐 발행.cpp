#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	/*
	��� �ݾ� x ���� �ݾ��� �������� �� ���ĵ� x�� ���� ���� ��, x�� ó������ ���� �� ����.
	*/
	sort(arr, arr+n);
	int coinsum = 0; // 0~(i-1)�� ������ �ݾ� ��
	for(int i=0; i<n; i++)
	{
		if(coinsum + 1 < arr[i])
		{
			cout << coinsum + 1;
			return 0;
		}
		coinsum += arr[i];
	}
	cout << coinsum + 1;
}
