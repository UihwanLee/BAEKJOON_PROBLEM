#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 1049번 기타줄 

int main(void)
{
	int N, M, result = 100000; 
	int tmp1, tmp2;
	int min1 = 9999, min2 = 9999;
	
	cin >> N >> M;
	
	for(int i=0; i<M; ++i)
	{
		cin >> tmp1 >> tmp2;
		if(min1 >= tmp1) min1 = tmp1;
		if(min2 >= tmp2) min2 = tmp2;
	}
	
	for(int k=0; k<=N/6+1; ++k)
	{
		int temp=0;
		if(k!=N/6+1) temp += min2 * ((N/6-k)*6 + N%6);
		temp += min1 * (k);
		if(result >= temp) result = temp;
	}
	
	cout << result;

	return 0;
} 
