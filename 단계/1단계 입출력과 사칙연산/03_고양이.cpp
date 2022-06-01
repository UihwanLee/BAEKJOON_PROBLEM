#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	string arr[4] = {"\\    \/\\", " \)  \( \'\)", "\(  \/  \)", " \\\(\_\_\)\|"};
	for(int i=0; i<3; i++)
	{
		cout << arr[i] << endl;
	}
	cout << arr[3];
	return 0;	
} 	

