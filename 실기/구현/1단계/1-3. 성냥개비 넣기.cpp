#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,w,h; cin>>n>>w>>h;
	//���� w, ���� h�� ���簢���� �밢�� ���̴� 
	// sqrt(w*w + h*h)�̴�.
	// �� ������ ������ ������ w*w + h*h ������ ���븸 �ڽ��� ���� �� �ִ�.
	while(n--) // n�� �ݺ�
	{
		int x; cin>>x; // ������ ���� x�� �Է�
		if(x*x <= w*w + h*h) cout<<"DA\n";
		else cout<<"NE\n";
	}
}
