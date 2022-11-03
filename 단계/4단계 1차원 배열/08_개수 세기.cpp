#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int N, T, v, SUM=0;
	int arr[101];
	
	cin >> N;
	
	for(int i=0; i<N; i++)
	{
		cin >> T;
		arr[i] = T;
	}
	
	cin >> v;
	
	for(int i=0; i<N; i++)
	{
		if(arr[i] == v) SUM++;
	}
	
	cout << SUM;
	
	
	return 0;	
} 	
