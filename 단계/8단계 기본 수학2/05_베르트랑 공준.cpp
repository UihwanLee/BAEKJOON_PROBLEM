#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	int arr[300000];
	int n, cnt;
	
	while(1)
	{
		cnt = 0;
		
		cin >> n;
		
		for(int i=0; i<=2*n; i++)
		{
			arr[i] = 0;
		}
		
		if(n==0) break;
		
		//에라토스테네스의 체
		for(int i=2; i<=2*n; i++)
		{
			// 배수 아닌 것들은 체크하지 않는다. 
			if(arr[i]==0){
				arr[i]=0;
			}
			
			for(int j=i+i; j<=2*n; j+=i)
			{
				// 배수 체크 
				if(arr[j]!=1){
					arr[j]=1;
				}
			} 
		} 
		
		for(int i=n+1; i<=2*n; i++)
		{
			if(arr[i]==0) cnt++;	
		} 
		
		cout << cnt << '\n';
	}
	
	
	return 0; 
}
