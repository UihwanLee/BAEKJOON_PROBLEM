#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int x, y, w, h;
	vector<int> v;
	int min = 1001;
	
	cin >> x >> y >> w >> h;
	v.emplace_back(x); v.emplace_back(y);
	v.emplace_back(w-x); v.emplace_back(h-y);
	for(int i=0; i<v.size(); i++)
	{
		if(min>v[i]) min = v[i];
	}
	cout << min;
	
    return 0;
}
