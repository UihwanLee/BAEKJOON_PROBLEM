#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ���� 1008�� A/B 

int main(void)
{
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.12lf", A / B);
	return 0;
}
