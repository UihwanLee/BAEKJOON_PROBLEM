#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ���� 1120�� ���ڿ�

#include <string>

int main(void)
{
	string a, b;
	cin >> a >> b;
	
	int len1 = (int)a.size();
	int len2 = (int)b.size();
	int result = len1;

	for(int i=0; i<=len2-len1; i++)
	{
		int k=0;
		for(int j=0; j< len1; j++)
		{
			if(a[j] != b[j+i]) k++;
		}
		if(result > k) result = k;
	}
	
	cout << result;

	return 0;
} 
