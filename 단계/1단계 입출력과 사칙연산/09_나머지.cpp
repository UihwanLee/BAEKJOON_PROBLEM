#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A+B)%C << endl; 
	cout << ((A%C) + (B%C))%C << endl; 
	cout << (A*B)%C << endl;
	cout << ((A%C) * (B%C))%C;
	return 0;	
} 	

