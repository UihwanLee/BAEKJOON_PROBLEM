#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int X, T=1, n=1, p, q;
	
	// 1 
	// 2 -> 1/2
	// 4 -> 3/1
	// 7 -> 1/4
	// 11 -> 5/1
	
	cin >> X;
	
	while(1)
	{		
		if(X==1) break;
	
		if(T>X)
		{
			break;
		}		
		T = T + n++;
	}
	
	int idx = n-1;
	int size = X - (T - (n-1));
	if(X==1)
	{
		p=1; q=1;
	}
	else if(idx%2==0)
	{
		p=1; q=idx;
	}
	else
	{
		q=1; p=idx;
	}

	for(int i=0; i<size; i++)
	{
		if(idx%2==0)
		{
			p++; q--;
		}
		else
		{
			p--; q++;
		}
	}
	
	cout << p << "/" << q;


	return 0;
}
