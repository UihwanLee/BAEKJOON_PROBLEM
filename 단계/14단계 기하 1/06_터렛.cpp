#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T, dis, rp, rm;
	int x1, y1, r1, x2, y2, r2;
	
	cin >> T;
	for(int i=0; i<T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	
		dis = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // 두 터렛 사이의 거리^2
		rp = (r1+r2)*(r1+r2); // r1 + r2
		rm = (r1-r2)*(r1-r2); // r1 - r2
		
		if(x1==x2 && y1==y2 && r1==r2) cout << -1; // 원 일치 
		else if(rm==dis || rp==dis) cout << 1; // 내접 or 외접 
		else if(rm<dis && dis<rp) cout << 2; // 두 점에서 만날 시 
		else cout << 0; // 그 외 
		cout << '\n';
	}
	
    return 0; 
}
