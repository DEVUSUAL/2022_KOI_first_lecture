#include<bits/stdc++.h>
using namespace std;
int main()
{
	// �ּ�: a b c�� ���� �� ������ 2�� ���Ϸ� �� �����̰� ���� �� �ִ�. a b c -> a b a+2 -> a a+1 a+2ó��
	// �ִ�: a~b �� b~c �� ū ���� ��� �����ϰ� ����ִ� ����� �ִ�.
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a,b,c; cin>>a>>b>>c;
	if(a+2==c) cout<<0;
	else if(b-a==2 || c-b==2) cout<<1;
	else cout<<2;
	
	cout<<'\n';
	
	cout<<max(b-a-1, c-b-1);
}
