#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int h,m; cin>>h>>m;
	// if������ �ذ��ص� ��
	h+=23, m+=60; // 23�ð� 60�� �߰�
	m-=45; // 45�� ����
	
	// h�ð� m���� ���Խð�����
	// �ð��� h + m/60, ���� m%60
	// �ð��� 24�� ���� �������� ���Ͽ� �Ϸ簡 �Ѵ� �κ��� ����
	cout<<(h+m/60)%24<<" "<<m%60;
}
