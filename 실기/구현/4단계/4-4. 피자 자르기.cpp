#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0; i<8; i++) cin>>arr[i];
	int maxans = 0;
	for(int i=0; i<8; i++) // ���� arr[i]���� �����ؼ� 4������ �Դ´ٸ�
	{
		int sum = 0;
		for(int j=i; j<i+4; j++) // i��°���� i+3��° ������ �Դ´�.
		{
			sum += arr[j%8]; // j��° ������ arr[j%8]�� ��ġ���ִ�. 
			//��) 6~9��° ������ arr[6,7,8,9]�� �ƴ� arr[6,7,0,1]�� ��ġ�Ѵ�.
		}
		if(maxans < sum) maxans = sum;
	}
	cout<<maxans;
}
	
