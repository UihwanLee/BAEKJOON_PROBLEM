#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int v[100] = { 0, };
	
	int N, M, temp;
	
	for(int i=0; i<100; i++) {
		v[i] = i+1;
	}
	
	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		// SWAP
		temp = v[a-1];
		v[a-1] = v[b-1];
		v[b-1] = temp;
	} 
	
	for(int i=0; i<N; i++) {
		cout << v[i] << " ";
	}
	
	return 0;	
} 	
