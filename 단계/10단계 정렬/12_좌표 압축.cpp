#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, tmp; 
	vector<int> v;
    map<int,int> m;
    
    cin >> N;
    for(int i=0; i<N; i++)
    {
    	cin >> tmp;
    	v.emplace_back(tmp);
    	m.insert(pair<int,int>(tmp, 0));
	}
    
    tmp=0;
    for(auto iter=m.begin(); iter!=m.end(); iter++)
    {
    	m[iter->first] = tmp;
    	tmp++;
	}
    
    for(int i=0; i<N; i++)
    {
    	cout << m[v[i]] << " ";
	}
   
	return 0;
}
