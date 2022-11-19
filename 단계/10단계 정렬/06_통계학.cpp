#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    map<int, int> m;
	int N, cnt=-1;
	double SUM = 0;
	int AVER=0, MID=0, MOS=0, RAN=0;
	cin >> N;
	
	for(int i=0; i< N; i++)
	{
		int key;
		cin >> key;
		SUM += key;
		if(m.count(key))
		{
			m[key]++;
		}
		else
		{
			m.insert(pair<int,int>(key, 1));
		}
		if(cnt<m[key]) cnt = m[key];
	}	
	
	int temp = 0, p=0;
	for(auto iter = m.begin(); iter!=m.end(); iter++)
	{
		if(temp==m.size()/2) MID = iter->first;
		temp++;
		
		if(iter->second==cnt)
		{
			if(p<2)
			{
				MOS = iter->first;
			}
			p++;
		}
	}
	
	AVER = round(SUM/N);
	
	auto iter = --m.end();
	RAN = iter->first - m.begin()->first; 
	
	cout << AVER << "\n" << MID << "\n" << MOS << "\n" << RAN;
	
	return 0;
}
