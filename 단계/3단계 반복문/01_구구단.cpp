#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a;

void input()
{
	cin >> a;
}

void process()
{
	
}

void output()
{
	for(int i=1; i<10; i++)
	{
		cout << a << " * " << i << " = " << a*i;
		if(i!=9) 
		{
			cout << endl;
		}
	}
}

int main(void)
{
	input();
	process();
	output();
	
	return 0;	
} 	
