#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       int id, pass;
       printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");
       printf("id: ____\b\b\b\b");
       scanf("%d", &id);                                    // id에 입력
       printf("pass: ____\b\b\b\b");
       scanf("%d", &pass);                                  // pass에 입력
       printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
}