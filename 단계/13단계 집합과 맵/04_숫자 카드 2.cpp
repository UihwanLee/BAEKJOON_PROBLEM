#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M, ans;
	unordered_map<int, int> um; 
    
	cin >> N;
    for(int i=0; i<N; i++)
    {
    	int tmp; cin >> tmp;
    	if(um.find(tmp)!=um.end()) um[tmp]++;
    	else um.insert(make_pair(tmp, 1));
	}
	
	cin >> M;
	for(int i=0; i<M; i++)
	{
		ans = 0;
		int tmp; cin >> tmp;
		if(um.find(tmp)!=um.end()) ans = um[tmp];
		cout << ans << " ";
	}
    
    return 0;
}
