#include <iostream>

using namespace std;

int Partition(int list[], int start, int end)
{
	int temp, index = start;
	int pivot = list[end];
	
	for(int i=start; i<end; i++)
	{
		if(list[i]<pivot)
		{
			temp = list[i];
			list[i] = list[index];
			list[index] = temp;
			index++;
		}
	}
	
	temp = list[index];
	list[index] = list[end];
	list[end] = temp;
	
	return index;
}

void QuickSorting(int list[], int start, int end)
{
	if(start<end)
	{
		int p = Partition(list, start, end);
		
		QuickSorting(list, start, p-1);
		QuickSorting(list, p+1, end);
	}
}

int main() 
{
	int N, k;
	
	cin >> N >> k;
	
	int* list = (int*)malloc(sizeof(int) * N);
	
	for(int i=0; i<N; i++)
	{
		cin >> list[i];
	}
	
	QuickSorting(list, 0, N-1);
	
	cout << list[N-k];
	
	return 0;
}
