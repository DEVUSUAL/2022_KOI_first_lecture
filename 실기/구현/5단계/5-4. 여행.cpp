#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    int a,b,n,x,y,mini=INT_MAX;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){ // i��° �����
        cin>>x>>y; // ����� x, y���� ���ø� �湮�Ѵ�.
        int m=-1,m1=-1;
        for(int j=0;j<y;j++){
            int t; cin>>t; // ����Ⱑ j��°�� �湮�ϴ� ���� t
            if(t==a) m=j; // m���� a�� ������ �湮 ������ ����
            if(t==b) m1=j; // m1���� b�� ������ �湮 ������ ����
        }
        if(m!=-1 && m1!=-1 && m <= m1){ // �� ��ΰ� a,b�� �湮�߰� ������ a->b �������
            mini=min(mini,x); // �� ������ ���� �ĺ��� �ȴ�.
        }
    }
    if(mini==INT_MAX){ // ���� mini�� ���ŵ��� �ʾҴٸ� ������ �� �� �ִ� ������ �������� �ʴ´�.
        cout<<"-1"; 
    }
    else cout<<mini;
}
