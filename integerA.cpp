/* ���� �ڷ����� ����ϴ� ���α׷�*/

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	short year;			
	int sale;			
	long totalSale;	
	long long largeValue;  	
	year = 10;									// 10
	sale = 200000000;							// 200000000
	totalSale = year * sale;					// �� 21���� ���� �ʵ��� ����
	printf("total sale = %d\n", totalSale);
}