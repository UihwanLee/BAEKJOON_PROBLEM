#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int N, count=2147483647, temp=0;
	bool isA = true, isB = true;
	
	cin >> N;
	
	isA = (N%5==0) ? true : false;
	if(isA)
	{
		// 5�� ������ ���� 5�� ������ ���� �� ���� ���� ����
		count = N/5;
	}
	else
	{
		// 3���� ������ ���� ���� 3���� ������� ī���Ϳ� ���
		isB = (N%3==0) ? true : false;
		count = (isB && count>=N/3) ? N/3 : count;
		
		// 5�� ������ 3���� ���� �� �ֳ� Ȯ�� 
		while(1)
		{
			if(N < 0) break;
			
			N -= 5; temp++;
			isB = (N%3==0) ? true : false;
			if(isB)
			{
				count = (count > temp + N/3) ? temp + N/3 : count; 	
			}
		}
	}
	
	
	return 0;
}
