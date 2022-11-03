#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int n, T=0;
	int arr[30] = { 0, };
	int arr2[2];
	
	for(int i=0; i<30; i++)
	{
		if(T < 28) cin >> n;
		arr[n-1]++;
		T++;
	}
	
	int temp=0;
	
	for(int i=0; i<30; i++)
	{
		if(arr[i]==0) 
		{
			cout << i+1 << endl;
		}
	}	
	
	return 0;	
} 	
