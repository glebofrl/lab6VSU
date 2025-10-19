#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int yeas;
	printf("Введите год: ");
	scanf("%d", &yeas);
	int check = yeas % 4;
	if ((yeas % 4 == 0 & yeas % 100 != 0) || yeas % 400 == 0)
		printf("Год %d високосный\n", yeas);
	else
		printf("Год %d не високосный\n", yeas);

	system("pause");
}