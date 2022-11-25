#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

bool binary_search(vector<long long>& arr, int len, long long target)
{
	int low=0, high = len-1;
	
	while(low<=high)
	{
		int mid = (low+high) / 2;
		if(target==arr[mid]) return true;
		if(target<arr[mid]) high = mid-1;
		else if(target>arr[mid]) low = mid+1;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int N, M;
    vector<long long> check;
    long long tmp; int ans;
    
    cin >> N;
    for(int i=0; i<N; i++)
    {
    	cin >> tmp;
    	check.emplace_back(tmp);
	}
	sort(check.begin(), check.end());
	cin >> M;
    for(int i=0; i<M; i++)
    {
    	cin >> tmp;
    	ans = (binary_search(check, check.size(), tmp)) ? 1 : 0;
    	cout << ans << " ";
	} 
    
    return 0;
}
