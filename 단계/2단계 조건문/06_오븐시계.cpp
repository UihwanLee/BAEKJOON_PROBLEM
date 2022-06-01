#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, b, c;
int result;

void input()
{
	cin >> a >> b >> c;
}

void process()
{
	result1 = (a+(b+c)/60)%24;
	result2 = (b+c)%60; 
}

void output()
{
	cout << result1 << " " << result2;
}

int main(void)
{
	input();
	process();
	output();
	
	return 0;	
} 	
