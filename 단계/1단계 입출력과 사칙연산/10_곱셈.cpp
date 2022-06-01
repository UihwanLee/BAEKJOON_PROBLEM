#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	
	int result1 = a*(b%10);
	int result2 = a*(b%100-(b%10));
	int result3 = a*(b-b%100);
	cout << result1 << endl << result2/10 << endl << result3/100 << endl
	<< result1 + result2 + result3;
	
	return 0;	
} 	

