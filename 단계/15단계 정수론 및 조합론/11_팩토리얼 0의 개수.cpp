#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	long long SUM = 1;
	cin >> N;
	for(long long i=1; i<=N; i++)
	{
		SUM *= i;
	} 
	cout << SUM;

    return 0; 
}
