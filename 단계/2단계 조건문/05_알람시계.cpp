#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, b;
int result1, result2;

void input()
{
	cin >> a >> b;
}

void process()
{
	int temp = (b<45) ? 1 : 0;
	result1 = (a==0 && temp==1) ? 24-temp : a-temp;
	result2 = (temp==1) ? b+15 : b-45; 
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
