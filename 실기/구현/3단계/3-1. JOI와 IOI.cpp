#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s; cin>>s;
	int cntjoi = 0, cntioi = 0;
	for(int i=0; i+2 < s.size(); i++) // i < s.size()-2
	{
		if(s.substr(i,3) == "JOI") cntjoi++;
		if(s.substr(i,3) == "IOI") cntioi++;
		// ���ڿ�.substr(��ġ, ����) => ��ġ�������� ������ŭ �ڸ� ���ڿ�
		// ���ڿ��� �� �����ڷ� ������ �� �����ϴ�.
		// "AB" < "AC"
		// "ABA" < "ABAB"
		// "A" < "a"
	}
	cout<<cntjoi<<'\n'<<cntioi;
}
