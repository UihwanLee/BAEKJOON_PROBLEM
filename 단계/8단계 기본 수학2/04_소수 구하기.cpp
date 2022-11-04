#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int* result = (int*)malloc(sizeof(int) * (n+1));
	for (int i = 2; i <= n; i++)
		*(result + i) = 100;
	for (int i = 2; i*i <= n; i++)
	{
		if (*(result + i) == 100)
			for (int j = 2; i * j <= n; j++)
				*(result + i * j) = 0;
	}
	for (int i = m; i <= n; i++)
		if(*(result+i)==100)
			printf("%d\n", i);
	return 0;
}
