#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int self(int num);

int main(void)
{
	int check[10001] = { 0 };
	int i=0, total=0;
	
	for(int i=0; i<10001; i++)
	{
		total = i + self(i);
		if(total < 10000)
		{
			check[total] = 1;
		}
	}
	
	for(int i=0; i<10000; i++)
	{
		if(check[i]!=1&&i!=0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;	
} 	

int self(int num)
{
	int sum=0;
	while(num!=0)
	{
		sum = sum+(num%10);
		num = num/10;
	}
	return sum;
}
