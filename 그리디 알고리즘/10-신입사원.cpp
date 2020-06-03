#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 1946번 신입사원 

#include <vector>
#include <algorithm>

vector<pair<int, int> > v;

struct mycomp {
	bool operator()(const pair<int, int> &a, const pair<int, int> &b) const{
		if(a.first == b.first)
			return a.second < b.second;
		return a.first < b.first;
	}
};

int main(void)
{
	int T, N, result[20]; 
	int tmp1, tmp2;
	
	cin >> T;
	
	for(int i=0; i<T; ++i)
	{
		vector<pair<int, int> > v;
		int min = 99999;
		
		cin >> N;
		for (int j = 0; j < N; ++j) {
			cin >> tmp1 >> tmp2;
			v.push_back(make_pair(tmp1, tmp2));
		}
		
		sort(v.begin(), v.end(), mycomp());
		
		result[i] = N;

		for (int j = 1; j < N; ++j) {
			// 서류 높은 순위 중 가장 높은 면접 순위를 뽑아서 검사. 
			if(v[j-1].second < min) min = v[j-1].second; 
			if(v[j].second > min) 
			{
				--result[i];
			}
		}
	}
	
	for(int i=0; i<T; ++i)
	{
		cout << result[i] << endl;
	}

	return 0;
} 
