#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x, y, z, sum;
	sum = 0;
	printf("3���� ������ �Է��ϼ��� (x, y, z): ");
	scanf("%d %d %d", &x, &y, &z);				// x, y, z�� �Է�
	sum += x;									// sum�� x�� ���Ѵ�
	sum += y;									// sum�� y�� ���Ѵ�
	sum += z;									// sum�� z�� ���Ѵ�
	printf("3�� ������ ���� %d\n", sum);
}