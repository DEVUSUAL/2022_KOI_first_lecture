#include<bits/stdc++.h>
using namespace std;
int x[3], y[3];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0;i<3;i++) cin>>x[i]>>y[i];
	// ���簢���� �� �������� x��ǥ�� 2���� ���� ¦������ ����, y��ǥ�� ���������̴�.
	// �� ������ �� �������� ��ǥ�� 3���� �� �� �ٸ� 2���� �ٸ� x��ǥ�� y��ǥ�� ã���� �ȴ�.
	
	// �ٸ� x��ǥ ã��
	if(x[0] == x[1]) cout<<x[2]<<" ";
	else if(x[1] == x[2]) cout<<x[0]<<" ";
	else cout<<x[1]<<" ";
	
	//�ٸ� y��ǥ ã��
	if(y[0] == y[1]) cout<<y[2]<<" ";
	else if(y[1] == y[2]) cout<<y[0]<<" ";
	else cout<<y[1]<<" ";
}
