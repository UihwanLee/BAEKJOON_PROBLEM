#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int N;
	int count = 0;
	
	cin >> N;
	
	count = (N%4==0) ? N / 4 : (N/4) + 1;
	
	for(int i=0; i<count; i++) {
		cout << "long "; 
	}
	cout << "int";
	
	return 0;	
} 	

