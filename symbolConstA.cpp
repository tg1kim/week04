#include <stdio.h>

#define TAX_RATE  0.2									// ���� 0.2�� ����

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	const int MONTHS = 12;								// ��� 12�� ����
	int mnthSalary, yearSalary;							// ���� ����
	printf("������ �Է��Ͻÿ�: ");							// �Է� �ȳ���
	scanf("%d", &mnthSalary);							// mnthSalary�� �Է�
	yearSalary = MONTHS * mnthSalary;					// ������ ���
	printf("������ %d�Դϴ�.\n", yearSalary);
	printf("������ %f�Դϴ�.\n", yearSalary * TAX_RATE);
}