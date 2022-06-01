#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, result;

void input()
{
	cin >> a;
}

void process()
{
	int temp1, temp2;
	for(int i=1; i<=a; i++)
	{
		result+=i;
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
