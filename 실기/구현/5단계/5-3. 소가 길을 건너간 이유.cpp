#include<bits/stdc++.h>
using namespace std;
int cow[13]; // cow[x] = x�� �Ұ� ���������� ���� ��ġ, -1�� ���� �� ���� ����
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	memset(cow, -1, sizeof(cow)); // memset�� �� 0�̳� -1�� ä�� ���� ����� �� 
	int n; cin>>n;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		int c,p; cin>>c>>p; // �� c�� p���� �����Ǿ���. 
		
		if(cow[c] == -1) // �� c�� ó�� �����Ǿ��� ���
		{
			cow[c] = p;
		}
		// �� c�� ���� �ô� ��(cow[c])�� �ٸ� ���� ���� ���
		else if(cow[c] != p)
		{
			ans++;
			cow[c] = p;
		}
	}
	cout<<ans;
}

