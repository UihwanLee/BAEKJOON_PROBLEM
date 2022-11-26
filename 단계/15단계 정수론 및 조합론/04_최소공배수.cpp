#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T, a, b;
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		cin >> a >> b;
		int cnt, min = (a<b) ? a : b;
		for(cnt=min; cnt>=1; cnt--)
		{
			if(a%cnt==0 && b%cnt==0) break;
		}
		cout <<(a*b)/cnt << '\n';
	}
    return 0; 
}
