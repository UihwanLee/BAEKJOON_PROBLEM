#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int N = 6, T;
	int arr[] = { 1, 1, 2, 2, 2, 8};
	
	for(int i=0; i<6; i++)
	{
		cin >> T;
		cout << arr[i] - T << " ";
	}
	
	return 0;	
} 	

