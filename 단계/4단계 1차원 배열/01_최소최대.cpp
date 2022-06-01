#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T;
	int min = 2147483647, max = -2147483647;

	cin >> T;
	for(int i=0; i<T; i++)
	{
		int temp;
		cin >> temp;
		if(temp>max) max = temp;
		if(temp<min) min = temp; 
	}
	
	cout << min << " " << max;
	return 0;	
} 	
