#include <stdio.h>
#include <limits.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	short shrtMoney = SHRT_MAX;				// �ִ밪 SHRT_MAX�� �ʱ�ȭ�Ѵ�.
	unsigned short unsgMoney = USHRT_MAX; 	// �ִ밪 USHRT_MAX�� �ʱ�ȭ�Ѵ�.
	
	shrtMoney = shrtMoney + 1;				// 1 ����
	printf("shrtMoney = %d\n", shrtMoney);
	
	unsgMoney = unsgMoney + 1;				// 1 ����
	printf("unsgMoney = %d\n", unsgMoney);
}