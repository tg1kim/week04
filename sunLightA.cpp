#include <stdio.h>

#pragma warning(disable: )

void main()
{
	double lightSpeed = 300000; 					// ���� �ӵ��� �����ϴ� ����(300000km/sec)
	double distance = 149600000;					// �Ÿ� ������ 149600000km�� �ʱ�ȭ�Ѵ�. 
	double time;									// �ð��� ��Ÿ���� ����
	time = distance / lightSpeed;					// �Ÿ��� ���� �ӵ��� ������.
	time = time / 60.0;								// �ʸ� ������ ��ȯ�Ѵ�. 
	printf("���� �ӵ��� %f km/s\n", lightSpeed);
	printf("�¾�� �������� �Ÿ� %f km\n", distance);
	printf("���� �ð��� %f ��\n", time);				// �ð��� ����Ѵ�. 
}