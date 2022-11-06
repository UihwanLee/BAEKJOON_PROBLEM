#include <iostream>

using namespace std;

int main() 
{
	int MAX=-1, a, b;
	
	for(int p=0; p<9; p++)
	{
		for(int q=0; q<9; q++)
		{
			int k; cin >> k;
			if(k>MAX)
			{
				MAX = k;
				a=p; b=q;
			}
		}
	}
	
	cout << MAX << endl << a+1 << ' ' << b+1;
	return 0;
}
