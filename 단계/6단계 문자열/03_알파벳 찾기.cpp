#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char str[101];
	int i=0, j=0, p=-1;
	int check;
	int check2[25] = { 0 };
	scanf("%s", str);
	
	for(i=97; i<123; i++)
	{
		j=0;
		check = 0;
		while(str[j]!='\0')
		{
			int temp = int(str[j]);
			if(temp == i && check2[temp-97]==0)
			{
				printf("%d ", j);
				check2[temp-97] = 1;
				check = 1;
			}
			j++;
		}
		if(check==0) printf("%d ", p);
	}

	
	return 0;	
} 	
