#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int N, T, cnt=0, pn=1;
	
	cin >> N;
	
	for(int i=0; i<N; i++)
	{
		cin >> T;
		
		if(T < 2) 
		{
			continue;
		}

		pn = 1;
		
		for(int j=2; j*j <= T; j++)
		{
			if(T % j == 0) { pn=0; break; }
		}
		
		if(pn==1)
		{
			cnt++;
		}
	}
	
	cout << cnt;
	
	return 0; 
}
