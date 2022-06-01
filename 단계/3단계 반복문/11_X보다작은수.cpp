#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{	
	int N, X;
	
	cin >> N >> X;
	
	for(int i=0; i<N; i++)
	{
		int temp;
		cin >> temp;
		if(temp < X)
		{
			cout << temp << " ";
		}
	}
	
	return 0;	
} 
