#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b, c;
	int arr[3];
	
	while(true)
	{
		cin >> a >> b >> c;
		if(a==0 && b==0 && c==0) break;
		
		arr[0] = a; arr[1] = b; arr[2] = c;
		sort(arr, arr + 3);
		string ans = (arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1]) ? "right" : "wrong";
		cout << ans << '\n';
	}
	
    return 0;
}
