#include <iostream>

using namespace std;

int main() 
{
	int arr[101][101] = { 0, };
	int N, p, q, result = 0;
	
	cin >> N;
	
	for(int i=0; i<N; i++)
	{
		int a, b;
		cin >> a >> b;
		
		 for(int p=b; p<b+10; p++)
		 {
		 	for(int q=a; q<a+10; q++)
		 	{
		 		if(arr[p][q]==0) arr[p][q] = 1;
			}
		 }
	}
	
	for(int p=0; p<100; p++)
	{
		for(int q=0; q<100; q++)
		{
			result += arr[p][q];
		}
	}
	
	cout << result;
	
	return 0;
}
