#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ���� 1541�� �Ҿ���� ��ȣ 

// - �ڷ� �̾����� + �� ���� ���ڴ� ��� ��ģ��.

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
	
	// ����(0) +(0) ����(1) -(1) ����(2)
	// -�� ���´ٸ� ���� - �� ���ö����� ������ ���ڸ� ��� ���Ѵ�.
	int tempnum = 0;//-�� ������ �� ���� -�� ������ �������� ���� ���� �����ϴ� ����
	int cnt_sign = 0;//��ȣ���� ������ ���Ϳ����� �ε���
	int sum = num[0];//�ʱ갪
	for (int i = 1; i < num.size(); i++) {
		if (sign[cnt_sign] == '-') {//-�̸�
			do {//do while �� ������ -���İ� ���� ���� �ֱ� ������
				tempnum += num[i++];
				cnt_sign++;
			} while (cnt_sign < sign.size() && sign[cnt_sign] == '+');//pmcnt�� pm�� ũ�⸦ ���� �ʰ� pm[pmcnt]�� ���ϱ� �̸� �ݺ�
			i--;//for������ i�� �÷��ֹǷ� �ϳ� ����
			sum -= tempnum;
		}
		else {
			cnt_sign++;
			tempnum = num[i];
			sum += tempnum;
		}
		tempnum = 0;//tempnum �ʱ�ȭ
	}
	cout << sum;
	
	return 0;
} 
