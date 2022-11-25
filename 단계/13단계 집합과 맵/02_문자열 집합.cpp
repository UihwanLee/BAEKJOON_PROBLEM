#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool binary_search(vector<string>& S, int len, string target)
{
	int low=0, high = len-1;
	
	while(low<=high)
	{
		int mid = (low+high) / 2;
		
		if(target==S[mid]) return true;
		if(target<S[mid]) high = mid-1;
		else if(target>S[mid]) low = mid+1;		
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
    cin >> N >> M;
    int ans = 0;
    string str;
    vector<string> S;
    vector<string> TEST;
    
    for(int i=0; i<N; i++)
    {
    	cin >> str;
    	S.emplace_back(str);
	}
	stable_sort(S.begin(), S.end());
	
	for(int i=0; i<M; i++)
    {
    	cin >> str;
    	if(binary_search(S, N, str)) ans++;
	}
    
    cout << ans;
    
    return 0;
}
