#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 1110번 더하기 사이클 

#include <stdlib.h>
#include <sstream>

string intToString(int n)
{
	stringstream s;
	s << n;
	return s.str();
}


int main(void)
{
	string n, result;
	int cnt=0;
	
	cin >> n;
	if(atoi(n.c_str()) < 10) { n = intToString(atoi(n.c_str()) * 10); }
	result = n;
	
	// 1 -> 1 + 0 = 1 -> 01 
	
	do
	{
		string temp = intToString((result[0] - '0') + (result[1] - '0'));
		result[0] = result[1]; result[1] = (atoi(temp.c_str()) < 10) ? temp[0] : temp[1];
		++cnt;
	} while(atoi(result.c_str()) != atoi(n.c_str()));
	
	cout << cnt;
	
	return 0;
}
