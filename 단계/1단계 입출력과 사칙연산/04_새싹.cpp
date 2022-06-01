#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	string arr[5] = {
"         \,r\'\"7",
"r\`\-_   \,\'  \,\/",
" \\\. \"\. L\_r\'",
"   \`\~\\\/",
"      \|" };
	for(int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
	cout << arr[4] << endl;
	return 0;	
} 	

