#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	while (1)
	{
		char S[1000];
		cin.getline(S, 100);
		if (*S == '\0') break;	
		cout << S << endl;
	}
	
	return 0;	
} 	
