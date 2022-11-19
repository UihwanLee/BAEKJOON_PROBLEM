#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool comp(pair<int,string>a, pair<int,string>b)
{
	return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N; 
    vector<pair<int, string>> v;
    
    cin >> N;
    for(int i=0; i<N; i++)
    {
    	int a; string b;
    	cin >> a >> b;
    	v.emplace_back(pair<int,string>(a,b));
	}
	
	stable_sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}
   
	return 0;
}
