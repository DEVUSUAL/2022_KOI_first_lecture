#include<bits/stdc++.h>
using namespace std;
int total[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(int i=1; i<=5; i++) // i�� �л��� ���� ���� total[i]�� ����
	{
		int sum = 0;
		for(int j=0; j<4; j++)
		{
			int x; cin>>x; // i�� �л��� j��° ������ x�� �Է¹ޱ�
			sum += x; // sum�� ������ ���ؼ� ���� ���� ������
		}
		total[i] = sum; // total[i]�� ���� ���� ����
	}
	
	// ���� ���� �ִ밪�� �� �л��� ���ϱ�
	int maxscore = 0; // ������ �ִ밪�� ������ ����
	int maxstudent = 0;
	for(int i=1; i<=5; i++)
	{
		if(maxscore < total[i]) // ���� i�� �л��� ���� �� total[i]�� ���ݱ����� �ִ밪���� ũ�ٸ�
		{
			maxscore = total[i]; // ���ݱ����� �ִ밪�� total[i]
			maxstudent = i; // ������ �ִ밪�� ���� �л��� ��ȣ�� i
		}
	}
	cout<<maxstudent<<" "<<maxscore;
}
