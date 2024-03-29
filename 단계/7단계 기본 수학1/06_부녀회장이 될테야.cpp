#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T, k, n;
	int arr[15][15]{ };
	
	cin >> T;
	
	// 0類 : 1 2 3 4... 
	// 1類 : 1 3 6 10...
	// 2類 : 1 4 10 20... 
	// 3類 : 1 5 15 35... 
	// k類 n�� 熱 = k-1類 n�� 熱 + k類 n-1�� 熱 
	
	for(int i=0; i<T; i++)
	{
		cin >> k >> n;
		
		for(int row=0; row<k+1; row++)
		{
			arr[row][0] = 1;
			for(int col=0; col<n; col++)
			{
				if(row == 0) arr[row][col] = col+1; // 0類檜賊 1 2 3 4..
				
				if(row > 0 && col > 0)
				{
					arr[row][col] = arr[row][col-1] + arr[row-1][col];
				}
			}
		}
		
		cout << arr[k][n-1] << endl;
	}

	return 0;
}
