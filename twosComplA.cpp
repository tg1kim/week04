/* 2�� ���� ���α׷� */

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x = 3;							// 3
	int y = -3;							// -3
	printf("    x = %08X\n", x);		// 8�ڸ��� 16������ ����Ѵ�.
	printf("    y = %08X\n", y);		// 8�ڸ��� 16������ ����Ѵ�.
	printf("x + y = %08X\n", x + y);	// 8�ڸ��� 16������ ����Ѵ�.
}
