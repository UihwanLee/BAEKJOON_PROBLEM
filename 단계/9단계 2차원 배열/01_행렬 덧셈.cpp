#include <iostream>

using namespace std;

int main() 
{
	int C[101][101] = {0,};
	int N, M;
	
	cin >> N >> M;
	
	for(int i=0; i<2; i++)
	{
		for(int p=0; p<N; p++)
		{
			for(int q=0; q<M; q++)
			{
				int k; cin >> k;
				C[p][q] += k;
			}	
		}
	}
	
	for(int p=0; p<N; p++)
	{
		for(int q=0; q<M; q++)
		{
			cout << C[p][q] << ' ';
		}
		
		cout << endl;
	}
	
	return 0;
}
