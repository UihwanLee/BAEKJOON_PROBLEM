#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 2875번 대회 or 인턴

// 2명 여 1명 남 (우선순위)
// 입력된 N, M으로 최대 팀원 수 산출 
// 나머지 남는 인원 중에서 K명을 뽑음 
// 남은 인원이 없거나 다 보내도 부족한 경우 
// K/3 + 1 (없어지는 팀원 수) 만큼 뺌. 

int main(void)
{
	int N, M, K, result = 0, other=0;
	cin >> N >> M >> K;
	
	result = N/2 >= M ? M : N/2;
	other = (N+M) - result * 3;
	
	if(other < K)
	{
		K = K - other;
		if(K>0) 
		{
			int temp = (K%3==0) ? K/3 : K/3 + 1;
			result = result - temp;	
		}
	}
	if(result < 0) result = 0;
	
	cout << result;

	return 0;
} 
