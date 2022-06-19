#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	long N, range(1), i(1);
	cin >> N;

	while (range < N)
	{
		range += 6 * i++;
	}

	cout << i << endl;



	return 0;
}
