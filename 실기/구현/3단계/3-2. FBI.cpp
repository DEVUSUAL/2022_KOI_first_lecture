#include<bits/stdc++.h>
using namespace std;
// bool ������ üũ �뵵�� ����ϴ� ���� 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	bool isprinted = false; // �� ���̶� FBI�� ã�Ƽ� ����� ���� �ִ°� 
	for(int T=1; T<=5; T++){
		string s; cin>>s;
		bool chk=false; // s �ȿ� FBI�� �ִ°� 
		for(int i=0; i+2 < s.size(); i++)
		{
			if(s[i]=='F'&&s[i+1]=='B'&&s[i+2]=='I') // �Ǵ� s.substr(i,3) == "FBI" 
				chk=true;
		}
		if(chk) {cout<<T<<' '; isprinted = true;} // FBI�� ã�Ҵٸ� ��ȣ�� ����Ѵ�. 
	}
	if(!isprinted) cout<<"HE GOT AWAY!"; // ���� ��µ� ���� ���ٸ� 
}
