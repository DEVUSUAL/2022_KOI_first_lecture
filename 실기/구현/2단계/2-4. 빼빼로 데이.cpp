#include<bits/stdc++.h>
using namespace std;
int main()
{
	// �ð��� �� ������ ��ȯ�ؼ� ������ �ذ��غ���.
	int d,h,m; cin>>d>>h>>m;
	// 11�� 1�� 0�� 0�����κ��� ���� �ð�
	int t1 = (d-1)*24*60 + h*60 + m ; // d h:m 
	int t2 = (11-1)*24*60 + 11*60 + 11; // 11 11:11
	
	if(t1 < t2) cout<<-1;
	else cout << t1 - t2;
}
