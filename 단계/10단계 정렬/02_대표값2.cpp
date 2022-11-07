#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int list[5];
	int avg=0, mid;
	
	for(int i=0; i<5; i++)
	{
		cin >> list[i];
		avg += list[i];
	}
	
	sort(list, list+5);
	cout << int(avg/5) << endl;
	cout << list[2];
	
	return 0;
}
