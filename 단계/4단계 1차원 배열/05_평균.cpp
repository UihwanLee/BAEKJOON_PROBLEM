#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T;
	int MAX = -2147483647;
	float *arr, SUM=0;
	
	cin >> T;
	arr = new float[T];
	
	for(int i=0; i<T; i++)
	{
		float temp;
		cin >> temp;
		arr[i] = temp;
		if(temp > MAX) MAX = temp;
	}
	
	for(int i=0; i<T; i++)
	{
		float temp = (arr[i]/MAX)*100;
		SUM += temp;
	}
	
	cout << SUM/T;
	
	return 0;	
} 	
