#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int i) {
	int rt;
	rt = sqrt(i);
	if (rt == 1 && i != 1) {	//2,3인 경우
		return true;
	}
	if (i % 2) {	//홀수일 경우
		for (int j = 2; j <= rt; j++) {
			if (!(i%j))
				return false;
			if (j == rt) {
				return true;
			}
		}
	}
}

int main() {
	int T;
	cin >> T;

	for (int p = 0; p < T; p++) {
		int n;
		cin >> n;

		for (int i = n / 2; i >= 2; i--) {
			if (isPrime(i) && isPrime(n - i)) {
				cout << i << " " << n - i << '\n';
				break;
			}
		}
	}
}
