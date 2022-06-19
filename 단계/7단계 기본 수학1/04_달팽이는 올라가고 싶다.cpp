#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int A, B, V, N, t;
	
	cin >> A >> B >> V; 
	
	// A + (A-B)(N-1) = V
	// A + (A-B)N - (A-B) = V
	// N = V - A + (A-B) / A-B
	
	N = (V - A  + (A-B)) / (A-B);
	t = (V - A  + (A-B)) % (A-B);
	
	(t==0) ? cout << N : cout << N+1;
	

	return 0;
}
