#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int A, B, C;
	int arr[10] = {0};

	cin >> A >> B >> C;
	
	string str = to_string(A*B*C);
	
	for(int i=0; str[i]!='\0'; i++)
	{
		int temp = str[i] - '0';
		arr[temp]++;
	}
	
	for(int i=0; i<10; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;	
} 	
