#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T, n, disR, dis1, dis2, CNT=0;
	int x1, y1, x2, y2, p, q, r;
	
	cin >> T;
	for(int i=0; i<T; i++)
	{
		CNT = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		
		cin >> n;
		for(int j=0; j<n; j++)
		{
			cin >> p >> q >> r;
			
			// �����, �������� �� �ȿ� ������ +1 �ۿ� ������ 0
			bool f1 = (x1 - p) * (x1 - p) + (y1 - q) * (y1 - q) < r*r; // ������� ���� ���� �Ÿ� 
			bool f2 = (x2 - p) * (x2 - p) + (y2 - q) * (y2 - q) < r*r; // �������� ���� ���� �Ÿ� 
			
			// �� �� �ϳ��� ���ԵǸ� count ����
			if((f1 && !f2) || (!f1 && f2)) CNT++;
		}
		cout << CNT << '\n';
	}
	
    return 0; 
}
