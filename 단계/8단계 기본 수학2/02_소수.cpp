#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int M, N, T, pn=1, sum=0, min = 10000;
	
	cin >> M >> N;
	
	for(int i=M; i<=N; i++)
	{		
		if(i < 2) 
		{
			continue;
		}
		
		pn=1;
		
		for(int j=2; j*j <= i; j++)
		{
			if(i % j == 0) 
			{ 
				pn = 0;
				break; 
			}
		}
		
		if(pn==1)
		{
			sum += i;
			if(i<=min) min = i;  
		}
	}
	
	if(sum!=0)
	{
		cout << sum << endl << min;
	}
	else
	{
		cout << -1;
	}
	
	return 0; 
}
