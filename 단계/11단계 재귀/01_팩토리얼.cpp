#include <iostream>

using namespace std;

int fact(int n)
{
	if(n==0) return 1;
	return n*fact(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, answer;
	cin >> N;
	
	answer = fact(N);
	cout << answer;
   
	return 0;
}
