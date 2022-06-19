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
		// 5로 나누어 지면 5로 나누는 것이 더 작은 개수 봉지
		count = N/5;
	}
	else
	{
		// 3으로 나누어 지면 먼저 3으로 나누어보고 카운터에 담기
		isB = (N%3==0) ? true : false;
		count = (isB && count>=N/3) ? N/3 : count;
		
		// 5씩 빼보고 3으로 나눌 수 있나 확인 
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
