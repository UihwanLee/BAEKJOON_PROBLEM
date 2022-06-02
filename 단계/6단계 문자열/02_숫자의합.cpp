#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char str[101];
	int T, SUM=0;
	scanf("%d", &T);
	scanf("%s", str);
	
	for(int i=0; i<T; i++)
	{
		int temp = str[i] - '0';
		SUM += temp;
	}
	printf("%d", SUM);
	
	return 0;	
} 	
