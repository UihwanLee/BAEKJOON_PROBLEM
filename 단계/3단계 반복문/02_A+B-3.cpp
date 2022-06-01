#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a, b, c;

void input()
{
	cin >> a;
}

void process()
{
	for(int i=0; i<a; i++)
	{
		cin >> b >> c;
		cout << b+c;
		if(i!=a-1)
		{
			cout << endl;
		}
	}
}

void output()
{

}

int main(void)
{
	input();
	process();
	output();
	
	return 0;	
} 	
