#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int yeas;
	printf("������� ���: ");
	scanf("%d", &yeas);
	int check = yeas % 4;
	if ((yeas % 4 == 0 & yeas % 100 != 0) || yeas % 400 == 0)
		printf("��� %d ����������\n", yeas);
	else
		printf("��� %d �� ����������\n", yeas);

	system("pause");
}