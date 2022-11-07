#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
	int N;
	cin >> N;
	
	int arr[10001] = { };
	
	for(int i=0; i< N; i++)
	{
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}
	
	int arrNum = sizeof(arr) / sizeof(int);
	
	for(int i=0; i<arrNum; i++)
	{
		for(int j=0; j<arr[i]; j++)
		{
			cout << i << '\n';
		}
	}
	
	return 0;
}
