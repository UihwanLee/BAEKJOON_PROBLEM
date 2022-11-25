#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	int CNT=0;
	unordered_map<int, int> um; 
    
	cin >> N >> M;
    for(int i=0; i<N; i++)
    {
    	int tmp; cin >> tmp;
    	if(um.find(tmp)!=um.end()) um[tmp]++;
    	else um.insert(make_pair(tmp, 0));
	}
	
	for(int i=0; i<M; i++)
	{
		int tmp; cin >> tmp;
		if(um.find(tmp)!=um.end()) CNT++;
	}
	
	cout << (N-CNT) + (M-CNT);
	
    return 0;
}
