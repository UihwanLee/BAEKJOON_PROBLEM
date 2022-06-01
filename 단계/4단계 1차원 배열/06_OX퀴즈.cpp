#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int T, bonus=0, score=0;
	string str;
	
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		cin >> str;
		
		for(char &chr : str)
		{
			if(chr == 'O')
			{
				bonus++;
				score += bonus;
			}
			else
			{
				bonus = 0;
			}
		}
		
		cout << score << endl;
		score = 0;
		bonus = 0;
	}
	
	
	return 0;	
} 	
