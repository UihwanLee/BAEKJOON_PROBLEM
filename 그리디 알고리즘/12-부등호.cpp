#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 2529번 부등호 

#include <string.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (x) = (t))

int main(void)
{
	int k;
	string a;
	string max = "9876543210", min = "0123456789";
	char result_max[10], result_min[10];
	
	cin >> k;
	
	for(int i=0; i<k; ++i)
	{
		string temp; cin >> temp;
		a.append(temp);
	}
	
	// 로직
	// 1. 큰 수 -> '>'를 만날때까지 오름차순 정렬 
	// 2. 작은 수 -> '>'를 만날때까지 오름차순 정렬 
	// < < <
	// 9 < 8 < 7 < 6 
	// 8 < 9 < 7 < 6
	// 8 < 7 < 9 < 6
	// 8 < 9 > 6 < 7
	
	int cnt = 0, max_cnt=0, min_cnt=0;
	vector<int> v;
	while(cnt<k)
	{
		v.push_back((int)max[cnt]);
		if(a[cnt] == '>')
		{
			sort(v.begin(), v.end());
			for(int i=0; i< v.size(); ++i)
			{
				result_max[max_cnt++] = v[i] + '0';
			} 
		} 
		//sort(v.begin(), v.end(), greater<int>()); // 낮은 숫자
		cnt++;
	}
	
	for(int i=0; i < max_cnt; ++i)
	{
		cout << result_max[i];
	}

	return 0;
} 
