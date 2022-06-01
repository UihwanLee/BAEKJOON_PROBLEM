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
	
	if(a==b && b==c && a==c)
	{
		result = 10000 + a*1000;
	}
	else if(a!=b && b!=c && a!=c)
	{
		int temp = (a>b&&a>c) ? a : (b>c&&b>c) ? b : c;
		result = temp*100;
	}
	else
	{
		int temp = (a==b || a==c) ? a : b;
		result = 1000 + temp*100; 
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
