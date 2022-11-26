#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, K, p=1, q=1;
	cin >> N >> K;
	
	for(int i=N; i>N-K; i--) p*=i;
	for(int j=1; j<=K; j++) q*=j;
	cout << p/q;

    return 0; 
}
