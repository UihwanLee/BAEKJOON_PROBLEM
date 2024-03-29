#include <iostream>

using namespace std;

int store[21][21][21];

int w(int a, int b, int c)
{
	if(a <= 0 || b <= 0 || c <= 0) return 1;
	if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
	
	if(store[a][b][c]) return store[a][b][c];
	
	if(a < b && b < c){
		store[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
		return store[a][b][c];
	}
	
	store[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
	return store[a][b][c];
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b, c;
	
	while(true){
		cin >> a >> b >> c;
		if(a==-1 && b==-1 && c==-1) break;
		
		cout << "w(" << a << ", " << b << ", " << c << ") = ";
		cout << w(a, b, c) << '\n';
	}

    return 0; 
}
