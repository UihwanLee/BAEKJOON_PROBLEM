#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    
    char S[102];
    int N[102] = { 0, };
    bool isTrue = false;
    
    cin >> S;
    
    int cnt = strlen(S);
    
    int bonus = (cnt%2 == 0) ? 0 : 1;
    
    for(int i=0; i<cnt/2; i++)
    {
    	N[i] = S[i] - '0';
	}
	
	for(int i=0; i<cnt/2; i++)
    {
    	int temp = S[(cnt-1) - i] - '0';
    	if(N[i] != temp) 
		{
			isTrue = true;
			break;
		}
	}
	
	if(isTrue) cout << 0;
	else cout << 1;
    
	return 0; 
}
