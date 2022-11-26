#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	int i, min = (a<b) ? a : b;
	for(i=a; i>=1; i--)
	{
		if(a%i==0 && b%i==0) break;
	}
	cout << i << '\n' << (a*b)/i;
	
    return 0; 
}
