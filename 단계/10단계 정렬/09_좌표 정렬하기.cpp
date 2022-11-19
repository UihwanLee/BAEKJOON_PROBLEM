#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int N;
    cin >> N;
	vector<pair<int, int>> v;
	for(int i=0; i<N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.emplace_back(pair<int,int>(a, b));	
	} 	
	
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}
	return 0;
}
