#include<bits/stdc++.h>
using namespace std;
int arr[1111];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n); 
	//sort �Լ��� �̿��Ͽ� ����� ���� ������ �ϴ� ��� ���� �����صξ�� ��
	//sort(arr, arr+n, cmp);
	//����) bool cmp(int p, int q) {return abs(p) < abs(q);} // ���밪�� ���� �ͺ��� �������� ���� 
	for(int i=0; i<n; i++) cout<<arr[i]<<'\n';
}
