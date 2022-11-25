#include <iostream>
#include <vector>
#include <algorithm> 
#include <cctype>

using namespace std;

string binary_search(vector<pair<int, string>>& v1, vector<pair<string, int>>& v2, int len, string target)
{
	int low=0, high = len-1;
	bool isNum = isdigit(target[0]);
	
	while(low<=high)
	{
		int mid = (low+high)/2;
		
		// 찾는것이 숫자라면
		if(isNum)
		{
			if(stoi(target)==v1[mid].first) return v1[mid].second;
			if(stoi(target)<v1[mid].first) high=mid-1;
			else if(stoi(target)>v1[mid].first) low=mid+1;
		} 
		// 찾는것이 문자라면
		else
		{
			if(target==v2[mid].first) return to_string(v2[mid].second);
			if(target<v2[mid].first) high=mid-1;
			else if(target>v2[mid].first) low=mid+1;
		}
	}
	return "";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	vector<pair<int, string>> v1;
	vector<pair<string, int>> v2;
    cin >> N >> M;
    
    for(int i=0; i<N; i++)
    {
    	string str; cin >> str;
    	v1.emplace_back(pair<int,string>(i+1,str));
    	v2.emplace_back(pair<string,int>(str,i+1));
	}
	
	stable_sort(v1.begin(), v1.end());
	stable_sort(v2.begin(), v2.end());
	
	for(int i=0; i<M; i++)
	{
		string tmp; cin>>tmp;
		string ans = binary_search(v1, v2, N, tmp);
		if(ans!="") cout << ans << '\n';
	}
    
    return 0;
}
