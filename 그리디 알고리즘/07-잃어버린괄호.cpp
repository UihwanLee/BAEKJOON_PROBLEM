#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 문제 1541번 잃어버린 괄호 

// - 뒤로 이어지는 + 앞 뒤의 숫자는 모두 합친다.

#include <vector>
#include <algorithm>

vector<int> num;
vector<char> sign;

int main(void)
{
	int num_arr[5];
	int cnt_num=0;
	string form;
	cin >> form;
	
	for(int i=0; i<form.length(); i++)
	{
		if(form[i] == '+' || form[i] == '-')
		{
			sign.push_back(form[i]);
		}
		else
		{
			num_arr[cnt_num] = form[i] - '0';
			cnt_num++;
			
			if(form[i+1] == '+' || form[i+1] == '-' || form[i+1] == '\0')
			{
				int temp=0, ten=1;
				for(int j=cnt_num-1; j>=0; j--)
				{
					temp += num_arr[j] * ten;
					ten *= 10;
				}
				cnt_num=0;
				num.push_back(temp);
			}
		}
	}
	
	// 숫자(0) +(0) 숫자(1) -(1) 숫자(2)
	// -가 나온다면 다음 - 가 나올때까지 다음의 숫자를 모두 더한다.
	int tempnum = 0;//-가 나왔을 때 다음 -가 나오기 전까지의 숫자 합을 저장하는 변수
	int cnt_sign = 0;//기호들을 저장한 벡터에서의 인덱스
	int sum = num[0];//초깃값
	for (int i = 1; i < num.size(); i++) {
		if (sign[cnt_sign] == '-') {//-이면
			do {//do while 쓴 이유는 -이후가 없을 수도 있기 때문에
				tempnum += num[i++];
				cnt_sign++;
			} while (cnt_sign < sign.size() && sign[cnt_sign] == '+');//pmcnt가 pm의 크기를 넘지 않고 pm[pmcnt]가 더하기 이면 반복
			i--;//for문에서 i를 올려주므로 하나 내림
			sum -= tempnum;
		}
		else {
			cnt_sign++;
			tempnum = num[i];
			sum += tempnum;
		}
		tempnum = 0;//tempnum 초기화
	}
	cout << sum;
	
	return 0;
} 
