#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int T, A, B;

void input()
{
	cin >> T;
}

void process()
{
	for(int i=0; i<T; i++)
	{
		cin >> A >> B;
		cout << A+B << "\n";
	}
}

void output()
{

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	input();
	process();
	output();
	
	return 0;	
} 	
