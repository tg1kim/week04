#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       int id, pass;
       printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
       printf("id: ____\b\b\b\b");
       scanf("%d", &id);                                    // id�� �Է�
       printf("pass: ____\b\b\b\b");
       scanf("%d", &pass);                                  // pass�� �Է�
       printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
}