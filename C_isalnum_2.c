#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;

	printf("�ƹ��ų� �Է��ϼ���. : ");
	scanf_s("%c", &a, sizeof(a));

	if (isalnum(a) != 0)
	{
		printf("�Է��Ͻ� ���� �������̰ų� �����Դϴ�.\n");
	}
	else
	{
		printf("�Է��Ͻ� ���� �����ڵ� �ƴϰ� ���ڵ� �ƴմϴ�.\n");
	}

	return 0;
}