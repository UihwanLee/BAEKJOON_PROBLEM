#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(2, "ABC"));
	v.push_back(pair<int, string>(3, "DEF"));
	v.push_back(pair<int, string>(4, "GHI"));
	v.push_back(pair<int, string>(5, "JKL"));
	v.push_back(pair<int, string>(6, "MNO"));
	v.push_back(pair<int, string>(7, "PQRS"));
	v.push_back(pair<int, string>(8, "TUV"));
	v.push_back(pair<int, string>(9, "WXYZ"));
	
	string str;
	int HOUR=0;
	cin >> str;
	char cstr[str.length()];
	strcpy(cstr, str.c_str());
	
	for(char &s : str)
	{
		for(int i=0; i<v.size(); i++)
		{
			if(v[i].second.find(s) != string::npos)
			{
				HOUR += v[i].first + 1;
			}
		}
	}
	
	cout << HOUR;
	
	return 0;	
} 
