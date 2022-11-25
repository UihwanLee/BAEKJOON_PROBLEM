#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	string str, tmp;
	unordered_map<string, int> um; 
    
	cin >> str;
	
	for(int i=0; i<str.length(); i++)
	{
		tmp = "";
		for(int j=i; j<str.length(); j++)
		{
			tmp = "";
			// a ab aba abab ababc
			// 1 2 3 4 5
			for(int k=i; k<=j; k++)
			{
				tmp += str[k];
			}
			if(um.find(tmp)!=um.end()) um[tmp]++;
			else um.insert(make_pair(tmp, 1));
		}
	}
	
	cout << um.size();
	
    return 0;
}
