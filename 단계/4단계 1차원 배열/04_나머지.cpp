#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T, result=0;
	int arr[42] = {0};

	for(int i=0; i<10; i++)
	{
		cin >> T;
		arr[T%42]++; 
	}
	
	for(int i=0; i<42; i++)
	{
		if(arr[i] != 0) 
		{
			result++;
		}
	}
	
	cout << result;
	
	return 0;	
} 	
