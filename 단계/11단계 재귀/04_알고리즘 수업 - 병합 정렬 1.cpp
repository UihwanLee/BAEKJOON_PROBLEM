#include <iostream>

using namespace std;

int CNT = 0;

void merge(int list[], int start, int mid, int end)
{
	int b[1000];
	int i=start;
	int j=mid+1;
	int k=0;
	
	while(i<=mid && j<=end)
	{
		if(list[i]<=list[j])
		{
			b[k] = list[i];
			k++; i++;
		}
		else
		{
			b[k] = list[j];
			j++; k++;
		}
	}
	
	while(i<=mid)
	{
		b[k] = list[i];
		k++; i++;
	}
	
	while(j<=end)
	{
		b[k] = list[j];
		j++; k++;
	}
	
	k--;
	while(k>=0)
	{
		list[start+k] = b[k];
		k--;
	}
}

void mergesort(int list[], int start, int end)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		
		CNT++;
		
		mergesort(list, start, mid);
		mergesort(list, mid+1, end);
		merge(list, start, mid, end);
	}
	else
	{
		return;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    int* list = (int*)malloc(sizeof(int)*N);
    
    for(int i=0; i<N; i++)
    {
    	int temp;
    	cin >> temp;
    	list[i] = temp;
	}
	
	mergesort(list, 0, N-1);
	
	for(int i=0; i<N; i++)
    {
    	cout << list[i] << " ";
	}
	cout << CNT;
    
}
