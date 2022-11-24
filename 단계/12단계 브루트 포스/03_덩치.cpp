#include <iostream>
#include <vector> 

using namespace std;

int main(){
    int n, lank;
    vector<pair<int,int>> v;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
    	int x, y;
    	cin >> x >> y; 
    	v.emplace_back(pair<int,int>(x,y));
	}
	
	for(int i=0; i<n; i++)
	{
		lank = 1;
		for(int j=0; j<n; j++)
		{
			if(v[i].first < v[j].first && v[i].second < v[j].second)
			{
				lank++;
			}
		}
		cout << lank << " ";
	}
    
    return 0;
}
