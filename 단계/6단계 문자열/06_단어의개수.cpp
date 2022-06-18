#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char A[3], B[3];
	int a=0, b=0, T=1;
	
	scanf("%s %s", &A, &B);
	
	for(int i=0; i<3; i++)
	{
		a += (A[i]-'0') * T;
		b += (B[i]-'0') * T;
		T *= 10;
	}

	(a>=b) ? cout << a : cout << b;
	
	return 0;	
} 	
