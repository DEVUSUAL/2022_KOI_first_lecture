#include<bits/stdc++.h>
using namespace std;
int arr[4];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0; i<4; i++) cin>>arr[i];
	sort(arr, arr+4);
	// arr[0]�� arr[1]�� ���θ� �����
	// arr[2]�� arr[3]�� ���θ� ����� ����
	// ���� arr[0], ���� arr[2]�� ���� ū ���簢���� ���´�.
	cout << arr[0] * arr[2];
}
