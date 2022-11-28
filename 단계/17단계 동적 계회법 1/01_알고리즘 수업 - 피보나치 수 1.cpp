#include <iostream>

using namespace std;

int fibo(int n)
{
    if (n == 1 || n == 2) return 1;
    else if (n > 2)
    return (fibo(n - 1) + fibo(n - 2));
    return (0);
}

int main()
{
	int n;

	cin >> n;
	cout << fibo(n) << " " << n-2;
	
	return 0;
}
