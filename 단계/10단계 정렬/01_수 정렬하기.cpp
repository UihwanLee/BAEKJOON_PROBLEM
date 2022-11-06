#include <iostream>

using namespace std;

int Partition(int list[], int start, int end)
{
	int pivot = list[end];
	int temp, index = start;
	
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

void QuickSort(int list[], int start, int end)
{
	if(start<end)
	{
		int p = Partition(list, start, end);
		
		QuickSort(list, start, p-1);
		QuickSort(list, p+1, end);
	}
}

int main() 
{
	int n;
	cin >> n;
	int* list = (int*)malloc(sizeof(int) * n);
	
	for(int i=0; i<n; i++) cin >> list[i]; 
	
	QuickSort(list, 0, n-1);
	
	for(int i=0; i<n; i++) cout << list[i] << endl; 
	
	return 0;
}
