#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int M, N, pn=1;
	
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
			cout << i << endl;  
		}
	}
	
	return 0; 
}
