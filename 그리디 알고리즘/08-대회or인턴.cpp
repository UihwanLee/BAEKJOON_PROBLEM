#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ���� 2875�� ��ȸ or ����

// 2�� �� 1�� �� (�켱����)
// �Էµ� N, M���� �ִ� ���� �� ���� 
// ������ ���� �ο� �߿��� K���� ���� 
// ���� �ο��� ���ų� �� ������ ������ ��� 
// K/3 + 1 (�������� ���� ��) ��ŭ ��. 

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
