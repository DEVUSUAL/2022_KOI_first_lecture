#include<bits/stdc++.h>
using namespace std;
int dist(char x, char y) // �� ���� ������ �Ÿ��� ��ȯ
{
	if(x<=y) return y-x;
	else return y-x+26;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin>>T; 
	while(T--)
	{
		string s,t; cin>>s>>t;
		cout<<"Distances: ";
		for(int i=0; i<s.size(); i++)
		{
			cout<<dist(s[i], t[i])<<' ';
		}
		cout<<'\n';
	}
}
