#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
	int N;
	cin >> N;
	int i=0;
	int list[N];
	for (i=0; i<N; i++)
	{
		cin >> list[i];
	}
	
	sort(list,list+N);
	
	for (i=0; i<N; i++)
	{
		cout << list[i] << '\n';
	}
	
	return 0;
}
