#include <iostream>
#include <vector> 

using namespace std;

int main(){
    int N, M;
    char arr[51][51] = { ' ', };
    vector<vector<char>> black; vector<vector<char>> white;
    vector<char> P_black = {'B','W','B','W','B','W','B','W'};
    vector<char> P_white = {'W','B','W','B','W','B','W','B'};
    int cnt_black=0, cnt_white=0;
    int max_black=64, max_white=64;
    int ans;
    
    // 패턴 채우기
	for(int i=0; i<8; i++)
	{
		if(i%2==0) 
		{
			black.emplace_back(P_black);
			white.emplace_back(P_white);
		}
		else
		{
			black.emplace_back(P_white);
			white.emplace_back(P_black);
		}
	} 
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++)
    {
    	for(int j=0; j<M; j++)
    	{
    		char tmp; cin >> tmp;
    		arr[i][j] = tmp;
		}
	}
	
	for(int start_i=0; start_i<=N-8; start_i++)
	{
		for(int start_j=0; start_j<=M-8; start_j++)
		{
			cnt_black = 0; cnt_white = 0;
			for(int i=start_i; i<start_i+8; i++)
			{
				for(int j=start_j; j<start_j+8; j++)
				{
					if(arr[i][j]!=white[i-start_i][j-start_j]) cnt_white++;
					if(arr[i][j]!=black[i-start_i][j-start_j]) cnt_black++;
				}
			}
			if(cnt_white<max_white) max_white = cnt_white;
			if(cnt_black<max_black) max_black = cnt_black;
		}
	}
	
	ans = (max_white<max_black) ? max_white : max_black;
	
	cout << ans;
    
    return 0;
}
