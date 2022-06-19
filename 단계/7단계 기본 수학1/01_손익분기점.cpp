#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	long A, B, C, ans=-1;
	
	cin >> A >> B >> C;
	
	if(C>B)
	{
		ans = A / (C-B) + 1;
	}

	cout << ans;
	
	return 0;	
} 	
