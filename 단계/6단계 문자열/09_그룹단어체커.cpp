#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    
    int N, cnt=0;
    string str;
    cin >> N;
    
    for(int i=0; i<N; i++)
    {
    	cin >> str;
    	bool flag = true;
    	for(int j=0; j<str.length(); j++)
    	{
    		for(int k=0; k<j; k++)
    		{
    			if(str[j] != str[j-1] && str[j] == str[k])
    			{
    				flag = false;
    				break;
				}
			}
		}
		if(flag) cnt++;
	}
	
	cout << cnt;
	return 0; 
}
