#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char code = 'A';								// A�� ���� �����
	printf("%d %d %d\n", code, code+1, code+2);		// 65 66 67�� ��µȴ�.
	printf("%c %c %c\n", code, code+1, code+2);		// A B C�� ��µȴ�. 
}