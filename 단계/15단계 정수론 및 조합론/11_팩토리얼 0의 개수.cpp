#include <iostream>
#include <cmath>

using namespace std;

long long calcu(long long n, int num)
{
	long long cnt = 0;
	
	for (long long i = num; i <= n; i *= num) {
		cnt += n / i;
	}
	
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n, m;
	cin >> n >> m;

	long long two = calcu(n, 2) - calcu(m, 2) - calcu(n-m, 2);
	long long five = calcu(n, 5) - calcu(m, 5) - calcu(n-m, 5);
	cout << min(two, five);

    return 0; 
}
