#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T, n, SUM=1;
	unordered_map<string, int> um;
	
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		um.clear();
		SUM = 1;
		cin >> n;
		for(int j=0; j<n; j++)
		{
			string a, key; cin >> a >> key;
			if(um.find(key)!=um.end()) um[key]++;
			else um.insert(pair<string,int>(key,1));
		}
		
		// (A+1)*(B+1)*... -1
		for(auto iter=um.begin(); iter!=um.end(); iter++)
		{
			SUM *= iter->second+1;
		}
		
		cout << SUM-1 << '\n';
	}

    return 0; 
}
