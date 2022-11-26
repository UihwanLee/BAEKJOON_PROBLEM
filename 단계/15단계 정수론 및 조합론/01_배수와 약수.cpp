#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	
	while(true)
	{
		cin >> a >> b;
		if(a==0 && b==0) break;
		
		if(a>b)
		{
			if(a%b==0) cout << "multiple";
			else cout << "neither";
		}
		else
		{
			if(b%a==0) cout << "factor";
			else cout << "neither";
		}
		cout << '\n';
	} 
	
    return 0; 
}
