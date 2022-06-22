#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#include<cmath>

using namespace std;

int main()
{
	int N, pn=1;
	
	cin >> N;
	
	int check = sqrt(N);
	
	for(int i=2; i<=check+1; i++)
	{
		if(N%i==0) 
		{
			pn = 0;
			break;
		}
	}
	
	if(pn=1)
	{
		cout << N;
	}
	else
	{
		cout << "¼Ò¼ö ¾Æ´Ô"; 
	}
	
	/*
	
	while(T<=10000000)
	{
		if(N==1) break;
		
		if(N%T==0)
		{
			N = N/T;
			cout << T << endl;
			if(N==1) break;
		}
		else
		{
			T++;
		}
	}
	
	*/
	
	return 0; 
}
