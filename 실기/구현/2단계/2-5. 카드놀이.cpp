#include<bits/stdc++.h>
using namespace std;
int As[11], Bs[11];
// �����ؾ� �ϴ� ����: �� ����, ���������� �̱� ���
int Asum = 0, Bsum = 0;
char lastwin = 'D';
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=10; i++) cin>>As[i]; // A�� ���� �Է�
	for(int i=1; i<=10; i++) cin>>Bs[i]; // B�� ���� �Է�
	for(int i=1; i<=10; i++) // i��° ����
	{
		if(As[i] > Bs[i])
		{
			lastwin = 'A';
			Asum += 3;
		}
		else if(As[i] < Bs[i]) 
		{
			lastwin = 'B';
			Bsum += 3;
		}
		else // ���� ��
		{
			Asum++; Bsum++;
		}
	}
	
	cout<<Asum<<" "<<Bsum<<"\n"; // ���� ���
	if(Asum > Bsum) cout<<'A';
	else if(Asum < Bsum) cout<<'B';
	else cout<<lastwin;
}
