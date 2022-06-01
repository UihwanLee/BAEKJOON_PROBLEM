#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int max = -2147483647, index;

	for(int i=0; i<9; i++)
	{
		int temp;
		cin >> temp;
		if(temp>max) 
		{
			max = temp;
			index = i+1;
		}
	}
	
	cout << max << endl << index;
	return 0;	
} 	
