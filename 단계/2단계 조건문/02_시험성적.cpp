#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a;
string result;

void input()
{
	cin >> a;
}

void process()
{
	if(a>=90)
	{
		result = "A";
	}
	else if(a>=80)
	{
		result = "B";
	}
	else if(a>=70)
	{
		result = "C";
	}
	else if(a>=60)
	{
		result = "D";
	}
	else
	{
		result = "F";
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
