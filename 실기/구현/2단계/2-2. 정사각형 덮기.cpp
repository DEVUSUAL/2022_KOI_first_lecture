#include<bits/stdc++.h>
using namespace std;
int main()
{
	// �ʿ��� ���簢���� ���� ���� = ��Ÿ���� ������ �ִ� x��ǥ�� �ּ� x ��ǥ�� ����
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	int t1 = max(x2,x4)-min(x1,x3); // �ʿ��� ���α���
	int t2 = max(y2,y4)-min(y1,y3); // �ʿ��� ���α���
	int maxt = max(t1, t2); // �ʿ��� ���簢���� �� ���� ����
	cout<< maxt * maxt;
}
