#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin>>T;
	while(T--)
	{
		string s; cin>>s;
		for(int i=0; i<s.size(); i++)
		{
			if('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
			// 3�� 5�� ������� (5-3)�� ���ϵ��� 'A'�� 'a'�� ����� ���� 'a'-'A' �� ���Ѵ�.
			//�ƽ�Ű�ڵ忡�� 'A'�� 65, 'a'�� 97���� ��ġ
		}
		cout<<s<<'\n';
	}
}
