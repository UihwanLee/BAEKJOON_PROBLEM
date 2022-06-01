#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a;
int result;

void input()
{
	cin >> a;
}

void process()
{
	if(a%4==0 && (a%100!=0 || a%400==0))
	{
		result = 1;
	}
	else
	{
		result = 0;
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
