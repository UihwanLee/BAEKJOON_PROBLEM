#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{	
	int A, B;
	
	do
	{
		cin >> A >> B;
		if(A+B!=0) cout << A+B << endl;
		
	} while(!(A==0 && B==0));
	
	return 0;	
} 
