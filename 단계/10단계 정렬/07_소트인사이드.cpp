#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    vector<int> v;
    long long N;
    cin >> N;
	
	string s = to_string(N);
	for(const auto n : s)
	{
		v.emplace_back(n-'0');
	}
	sort(v.begin(), v.end(), greater<>());
	for(const auto e : v)
	{
		cout << e;
	}
	return 0;
}
