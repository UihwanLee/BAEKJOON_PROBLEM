#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char str[20];
	int T, R, p, q, e;
	scanf("%d", &T);
	
	for(int p=0; p<T; p++)
	{
		q = 0;
		scanf("%d", &R);
		scanf("%s", str);
		while(str[q]!='\0')
		{
			for(int e=0; e<R; e++)
			{
				printf("%c", str[q]);
			}
			q++;
		}
		printf("\n");
	}
	return 0;	
} 	
