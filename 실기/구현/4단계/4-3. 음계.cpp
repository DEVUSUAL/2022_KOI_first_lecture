#include<bits/stdc++.h>
using namespace std;
int arr[9];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=8; i++) cin>>arr[i];
	bool asc = true, des = true; 
	for(int i=2; i<=8; i++)
	{
		if(arr[i-1] < arr[i]) // �����ߴٸ�
		{
			des = false; // descending�� �ƴϴ�.
		}
		if(arr[i-1] > arr[i]) // �����ߴٸ�
		{
			asc = false; // ascending�� �ƴϴ�.
		}
	}
	if(asc) cout<<"ascending";
	else if(des) cout<<"descending";
	else cout<<"mixed";
}
	
