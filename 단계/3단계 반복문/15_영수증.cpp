#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include <stdlib.h>
#include <sstream>

int main(void)
{
	int X, N, a, b, SUM=0;
	
	cin >> X >> N;
	
	for(int i=0; i<N; i++)
	{
		cin >> a >> b;
		SUM += a * b;
	} 
	
	(SUM==X) ? cout << "Yes" : cout << "No";
	
	return 0;
}
