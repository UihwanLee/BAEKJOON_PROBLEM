#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int> > v;

struct mycomp {
	bool operator()(const pair<int, int> &a, const pair<int, int> &b) const {
		if (a.second == b.second) 
			return a.first < b.first; 
		return a.second < b.second;
	}
};

int main() {
	int n, cnt = 0, end, tmp1, tmp2;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp1 >> tmp2;
		v.push_back(make_pair(tmp1, tmp2));
	}
	sort(v.begin(), v.end(), mycomp());

	cnt++; end = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first >= end) {
			end = v[i].second;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
