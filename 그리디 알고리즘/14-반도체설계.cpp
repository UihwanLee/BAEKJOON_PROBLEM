#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 2352번 반도체설계
 
#include <vector>
#include <algorithm>

// <Logic>
// 1 ~ n까지 pibot을 결정
// 이때 pivot은 최고 상한선으로 pivot에 매치되는 숫자 이하로만 연산
//  

vector<pair<int, int> > port;
int n;
int cnt_max = 0;

void checkCountByPivot(int _pivot, int cnt)
{
	cout << "pivot: " << _pivot << ", cnt: " << cnt << ", port: (" << port[_pivot].first << ", " << port[_pivot].second << ")" << endl;
	if(cnt_max < cnt) cnt_max = cnt;
	if(_pivot==5 || port[_pivot].second == 6) {return;}
	for(int j=port[_pivot].second; j<n; ++j)
	{
		if(port[_pivot].first < port[j].first) {
			checkCountByPivot(port[j].first-1, ++cnt);
		}
	}
	return;
}

int main(void)
{
	int tmp;
	
	cin >> n;
	
	for(int i=0; i<n; ++i) {
		cin >> tmp;
		port.push_back(make_pair(i+1 ,tmp));
	}
	
	for(int i=0; i<n; ++i)
	{
		int cnt = 1;
		cout << "pivot: " << i << endl;
		checkCountByPivot(i, cnt);
		/*
		cout << "pivot: (" << port[i].first << ", " << port[i].second << ")" << endl;
		for(int j=port[i].second; j<n; ++j)
		{
			if(port[i].first < port[j].first) {
				cnt++;
				cout << "cnt: "<< cnt << ", port : (" << port[j].first << ", " << port[j].second << ")" << endl;
			}
		}
		cout << endl;
		if(cnt_max < cnt) cnt_max = cnt;
		*/
		cout << endl;
		cout << endl;
	}
	
	cout << cnt_max;

	return 0;
} 
