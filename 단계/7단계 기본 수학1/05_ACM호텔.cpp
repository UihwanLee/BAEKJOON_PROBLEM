#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T, H, W, N;
	int X, Y;
	
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		cin >> H >> W >> N;
		
		Y = (N % H == 0) ? H : N % H;
		X = (N % H == 0) ? N / H : N / H + 1;
		
		(X<10) ? cout << Y << "0" << X << endl : cout << Y << X << endl;
	}
	

	return 0;
}
