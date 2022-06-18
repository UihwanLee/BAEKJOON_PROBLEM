#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	int alpha[26] = { 0 };
	int max = 0, check = -1, resultIndex = -1;
	string str;
	cin >> str;
	char cstr[str.length()];
	strcpy(cstr, str.c_str());	
	for(int i=0; i<str.length(); i++)
	{
		int index = ((int)cstr[i] <= 90) ? (int)cstr[i]-65 : (int)cstr[i]-97;
		alpha[index]++;
		if(alpha[index] > max)
		{
			max = alpha[index];
		}
	}
	
	for(int i=0; i<26; i++)
	{
		if(alpha[i] == max)
		{
			check++;
			resultIndex = i;
		}
	}
	
	if(check==0 && resultIndex!=-1)
	{
		cout << char(resultIndex+65);
	}
	else
	{
		cout << "?";
	}
	
	return 0;	
} 	
