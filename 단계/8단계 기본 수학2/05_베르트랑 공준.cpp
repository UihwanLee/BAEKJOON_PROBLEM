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
		
		//�����佺�׳׽��� ü
		for(int i=2; i<=2*n; i++)
		{
			// ��� �ƴ� �͵��� üũ���� �ʴ´�. 
			if(arr[i]==0){
				arr[i]=0;
			}
			
			for(int j=i+i; j<=2*n; j+=i)
			{
				// ��� üũ 
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
