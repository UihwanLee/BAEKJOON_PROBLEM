#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
	string A, B;
	int p=0, q=0, temp;
	
	cin >> A >> B;
	
	char arr_A[A.length()];
	strcpy(arr_A, A.c_str());
	
	char arr_B[B.length()];
	strcpy(arr_B, B.c_str());
	
	int size = (A.length() >= B.length()) ? A.length() : B.length();
	int arr_C[size+1] = { 0 };
	
	int left = 0, right = A.length()-1;
	for(int i=0; i<A.length()/2; i++)
	{
		temp = arr_A[left];
		arr_A[left] = arr_A[right];
		arr_A[right] = temp;
		
		left++;
		right--;
	}
	
	left = 0, right = B.length()-1;
	for(int i=0; i<B.length()/2; i++)
	{
		temp = arr_B[left];
		arr_B[left] = arr_B[right];
		arr_B[right] = temp;
		
		left++;
		right--;
	}
	
	for(int i=0; i<size; i++)
	{
		// A >= B
		if(size == A.length())
		{
			if(i+1<=B.length())
			{
				p = ((arr_A[i] - '0') + (arr_B[i] - '0') + q) % 10;
				q = ((((arr_A[i] - '0') + (arr_B[i] - '0') + q) - 10) >= 0) ? 1 : 0;
				arr_C[i] = p;
				if(i==size-1 && A.length()==B.length() && q == 1)
				{
					arr_C[i+1] = 1;
				}
			}
			else
			{
				p = ((arr_A[i] - '0') + q) % 10;
				q = ((((arr_A[i] - '0') + q) - 10) >= 0) ? 1 : 0;
				arr_C[i] = p;
				if(i==size-1 && q == 1)
				{
					arr_C[i+1] = 1;
				}
			}
		}
		// A < B
		else
		{
			if(i+1<=A.length())
			{
				p = ((arr_A[i] - '0') + (arr_B[i] - '0') + q) % 10;
				q = ((((arr_A[i] - '0') + (arr_B[i] - '0') + q) - 10) >= 0) ? 1 : 0;
				arr_C[i] = p;
				if(i==size-1 && A.length()==B.length() && q == 1)
				{
					arr_C[i+1] = 1;
				}
			}
			else
			{
				p = ((arr_B[i] - '0') + q) % 10;
				q = ((((arr_B[i] - '0') + q) - 10) >= 0) ? 1 : 0;
				arr_C[i] = p;
				if(i==size-1 && q == 1)
				{
					arr_C[i+1] = 1;
				}
			}
		}
	}
	
	for(int i=size-1; i>=0; i--)
	{
		if(i==size-1 && arr_C[size] != 0)
		{
			cout << arr_C[i+1];
		}
		cout << arr_C[i];
	}
	
		
	return 0;
}
