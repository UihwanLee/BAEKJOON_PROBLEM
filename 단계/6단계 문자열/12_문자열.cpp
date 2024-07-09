#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	char A[1002];
	int N = 0;
	int cnt = 0;
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cnt = 0;
		cin >> A;
		for(int j=0; j<1000; j++) {
			if(A[j] == '\0') {
				break;
			}
			cnt++;
		}
		
		cout << A[0] << A[cnt-1];
		cout << endl;
	}
	
	return 0;	
} 	
