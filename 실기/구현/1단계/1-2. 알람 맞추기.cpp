#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int h,m; cin>>h>>m;
	
	if(m>=45) m-=45; // ���� 45�� ������ �׳� 45���� ����. 
	else {h--; m+=15;} // ���� 45�� ���� ������ 1�ð��� ���� 15���� ���Ѵ�. 
	
	if(h<0) h+=24; // �ð��� ������ �������� 24�� ���Ѵ�. 
	
	cout<<h<<" "<<m;
}
