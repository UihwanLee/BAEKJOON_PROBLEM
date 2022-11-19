#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool comp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int N;
    cin >> N;
	vector<string> v;
	string str;
	getline(cin, str);
	for(int i=0; i<N; i++)
	{
		getline(cin, str);
		if(find(v.begin(), v.end(), str) == v.end()) v.emplace_back(str);
	} 	
	
	sort(v.begin(), v.end(), comp);
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << '\n';
	}
	return 0;
}
