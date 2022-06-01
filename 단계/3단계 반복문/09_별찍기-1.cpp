#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{	
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("*");		
		}		
		printf("\n");
	}
	
	return 0;	
} 
