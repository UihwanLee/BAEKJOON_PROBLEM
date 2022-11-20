#include <iostream>
#include <vector>

using namespace std;

int CNT=0;
vector<pair<int,int>> stack;

void hanoi(int N, int from, int to, int other)
{
	if(N==0) return;
	hanoi(N-1, from, other, to);
	CNT++;
	stack.emplace_back(pair<int,int>(from,to));
	hanoi(N-1, other, to, from);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
	cin >> N;
	hanoi(N, 1, 3, 2);
	cout << CNT << '\n';
	for(int i=0; i<stack.size(); i++)
	{
		cout << stack[i].first << ' ' << stack[i].second << '\n';
	}
}
