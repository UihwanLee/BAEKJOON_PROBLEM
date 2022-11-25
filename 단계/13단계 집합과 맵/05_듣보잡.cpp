#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M, ans;
	vector<string> v;
	unordered_map<string, int> um; 
    
	cin >> N >> M;
    for(int i=0; i<N; i++)
    {
    	string tmp; cin >> tmp;
    	if(um.find(tmp)!=um.end()) um[tmp]++;
    	else um.insert(make_pair(tmp, 0));
	}
	
	for(int i=0; i<M; i++)
	{
		ans = 0;
		string tmp; cin >> tmp;
		if(um.find(tmp)!=um.end()) v.emplace_back(tmp);
	}
	
	stable_sort(v.begin(), v.end());
	cout << v.size() << '\n';
    for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << '\n';
	}
	
    return 0;
}
