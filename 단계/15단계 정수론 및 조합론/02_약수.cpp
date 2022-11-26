#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, tmp;
	vector<int> v;
	
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> tmp;
		v.emplace_back(tmp);
	}
	
	stable_sort(v.begin(), v.end());
	cout << v[0]*v[v.size()-1];
	
    return 0; 
}
