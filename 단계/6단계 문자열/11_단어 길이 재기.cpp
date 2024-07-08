#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char S[102];
	int cnt = 0;
	
	cin >> S;
	
	for(int i=0; i<100; i++) {
		if(S[i] == '\0') {
			break;
		}
		cnt++;
	}
	
	cout << cnt;
	
	return 0;	
} 	
