#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, L, tmp;
	cin >> N;
	
	for(int i=0; i<N; i++)
	{
		if(i==0) cin >> L;
		else
		{
			cin>>tmp;
			int gcl, min = (L<tmp) ? L : tmp;
			for(gcl=min; gcl>=1; gcl--)
			{
				if(L%gcl==0 && tmp%gcl==0) break;
			}
			cout << L/gcl << "/" << tmp/gcl << '\n';
		}
	}
	
    return 0; 
}
