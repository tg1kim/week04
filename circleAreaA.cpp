/* ���� ������ ����ϴ� ���α׷�*/

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	float radius;						// ���� ������
	float area;							// ���� ����
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);				// radius�� �Է�
	area = 3.141592 * radius * radius;	// PI = 3.141592
	printf("���� ����: %f\n", area);
}