#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ¹®Á¦ 2217¹ø 

#include <vector>
#include <algorithm>

vector<int> arr;

int main(void)
{
	int n, rope, w, cnt=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> rope;
		arr.push_back(rope);
	}
	sort(arr.begin(), arr.end(), greater<int>());
	
	for(int i=0; i<n; i++)
	{
		w = arr[i] * (i+1);
		if(cnt < w) cnt = w;
	}
	
	cout << cnt;
	
	return 0;
} 
