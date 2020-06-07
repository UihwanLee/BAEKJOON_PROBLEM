#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 1080번 행렬 

#define MAX 51

int A[MAX][MAX] = { 0, };
int B[MAX][MAX] = { 0, };
int main(void)
{
	int n, m;
	char tmp;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> tmp;
			A[i][j] = tmp - '0';
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			B[i][j] = tmp - '0';
		}
	}
	int res = 0;
	

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (A[i][j] != B[i][j]) {
				res++;
				for (int a = i; a <= i + 2; a++) {
					for (int b = j; b <= j + 2; b++) {
						A[a][b] = 1 - A[a][b];
					}
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] != B[i][j])
				res = -1;
		}
	}
	cout << res;
	
	return 0;
} 
