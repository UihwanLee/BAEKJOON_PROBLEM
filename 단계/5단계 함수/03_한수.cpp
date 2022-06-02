#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int checkSequence(int N);

int main(void)
{
	int N, size;
	int num=0;
	
	cin >> N; 
	
	for(int i=1; i<=N; i++)
	{
		string str = to_string(i); 
		size = str.length();

		// 세지리 수이상 등차수열 판단 
		if(i >= 100)
		{ 
			char chr[str.length()];
			strcpy(chr, str.c_str());

			int temp = (chr[1] - '0') - (chr[0] - '0');

			for(int j=1; j<size-1; j++)
			{
				if((chr[j+1] - '0') - (chr[j] - '0')!=temp)
				{
					num++;
				}
			}
		}
	}
	if(N==1000) num--;
	cout << N-num;
	
	return 0;	
} 	

