#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ZOAC 4 

int main(void)
{
	int answer;
	int H, W, N, M;
	
	cin >> H >> W >> N >> M;
	
	int A = (H%(N+1) == 0) ? (H/(N+1)) : (H/(N+1)) + 1;
	int B = (W%(M+1) == 0) ? (W/(M+1)) : (W/(M+1)) + 1;
	
	answer = A * B;
	
	cout << answer;
	
	return 0;
}
