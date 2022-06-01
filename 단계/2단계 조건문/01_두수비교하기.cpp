#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, b;
string result;

void input()
{
	cin >> a >> b;
}

void process()
{
	if(a>b)
	{
		result = ">";
	}
	else if(a==b)
	{
		result = "==";
	}
	else
	{
		result = "<";
	}
}

void output()
{
	cout << result;
}

int main(void)
{
	input();
	process();
	output();
	
	return 0;	
} 	

