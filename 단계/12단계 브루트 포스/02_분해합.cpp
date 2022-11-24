#include <iostream>
#include <cmath> 

using namespace std;

int main(){
    int n, cnt=0, ans = 0;
    string str;
    cin >> n;
    
    int temp = n;
    while(temp>0)
    {
    	cnt++;
    	temp = temp/10;
	}
	
	// offset Á¤ÇÏ±â 
	int start = (pow(10, cnt-1)+9*(cnt-1)>n) ? pow(10, cnt-2) : pow(10, cnt-1);
	
	for(int i=start; i<n; i++)
	{
		int sum = 0;
		str = to_string(i);
		for(const auto c : str)
		{
			sum += c - '0';
		}
		if(sum+i==n)
		{
			ans = i;
			break;
		}
	}
	
	cout << ans;
    
    return 0;
}
