#include<bits/stdc++.h>
using namespace std;
int x[3], y[3];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=0;i<3;i++) cin>>x[i]>>y[i];
	// x[i] �� �� �ٸ� �ϳ� ã��
	// 3�� �� 2���� ���ٸ� �߾Ӱ��� ������ �ٸ� �ϳ��� ����.
	// ������ �� x[0]==x[1]�̶�� x[0]-x[1]+x[2] == x[2]
	// ������ �� x[2]==x[1]�̶�� x[0]-x[1]+x[2] == x[0]
	sort(x,x+3); sort(y,y+3);
	cout<<x[0]-x[1]+x[2]<<" "<<y[0]-y[1]+y[2];
	
	// �Ǵ� xor�� ������ �̿��Ͽ� ������ ���� �ڵ�� ��ü�� ���� �ִ�.
	// cout<<x[0]^x[1]^x[2]<<" "<<y[0]^y[1]^y[2]
}
