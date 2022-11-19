#include <iostream>

using namespace std;

int fibo(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return fibo(n-1) + fibo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, answer;
	cin >> N;
	
	answer = fibo(N);
	cout << answer;
   
	return 0;
}
