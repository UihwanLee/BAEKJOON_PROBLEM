#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main(void)
{
	int T, N;
	int *score;
	
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		cin >> N;
		score = new int[N];
		
		double sum = 0;
		
		for(int j=0; j<N; j++)
		{
			int temp;
			cin >> temp;
			sum += temp;
			score[j] = temp;
		}
		
		float num = 0;
		for(int j=0; j<N; j++)
		{
			if(score[j]>sum/N)
			{
				num++;
			}
		}
		
		double prop = num/N*100;
		printf("%.3lf%\n", round(prop*1000) / 1000 );
		//cout << round(prop*1000) / 1000 << "%" << endl;
	}
	
	delete[] score;
	return 0;	
} 	
