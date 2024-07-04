#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int v[100] = { 0, };
	
	int N, M;
	
	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		for(int j=a; j<=b; j++) {
			v[j-1] = c;
		}
	} 
	
	for(int i=0; i<N; i++) {
		cout << v[i] << " ";
	}
	
	return 0;	
} 	
