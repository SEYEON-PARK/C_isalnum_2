#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;

	printf("아무거나 입력하세요. : ");
	scanf_s("%c", &a, sizeof(a)); // 입력받기

	if (isalnum(a) != 0)
	{
		printf("입력하신 것은 영문자이거나 숫자입니다.\n");
	}
	else
	{
		printf("입력하신 것은 영문자도 아니고 숫자도 아닙니다.\n");
	}

	return 0;
}
