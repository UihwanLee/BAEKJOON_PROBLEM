#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ¹®Á¦ 10610¹ø 30 

#include <vector>
#include <algorithm>

vector<int> arr;

int main(void)
{
	int sum;
	string num;
	cin >> num;
	
	for(int i=0; i<num.length(); i++)
	{
		arr.push_back(num[i] - '0');
		sum += num[i] - '0';
	}
	
	sort(arr.begin(), arr.end(), greater<int>());

	if(arr[num.length()-1] != 0) cout << -1;
	else
	{
		if(sum % 3 != 0) cout << -1;
		else
		{
			for(int i=0; i<num.length(); i++)
				cout << arr[i];
		}
	}
	return 0;
} 
