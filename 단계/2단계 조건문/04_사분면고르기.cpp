#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, b;
int result;

void input()
{
	cin >> a >> b;
}

void process()
{
	if(a>0)
	{
		result = (b>0) ? 1 : 4;
	}
	else 
	{
		result = (b>0) ? 2 : 3;
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
