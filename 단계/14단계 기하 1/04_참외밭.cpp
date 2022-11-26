#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, width=1, answer=0;
	pair<int, int> arr[6];
	
	cin >> N;
	for(int i=0; i<6; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	} 
	
	for(int i=0; i<6; i++)
	{
		int tmp = arr[i].second * arr[(i+1)%6].second;
		if(width==1 || tmp>width)
		{
			width = tmp;
			answer = (width-arr[(i+3)%6].second * arr[(i+4)%6].second)*N;
		}
	} 
	cout << answer;
	
    return 0;
}
