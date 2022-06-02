#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

long long sum(std::vector<int> &a) 
{
	long long sum = 0;
	for(int i=0; i<a.size(); i++)
	{
		sum += a[i];
	}
	return sum;
}
