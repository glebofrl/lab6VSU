#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x;
	printf("Введите число: ");
	scanf("%d", &x);
	float Fx = x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6); //если х=3 => 9, если x = 4 =>0,014286
	printf("Ответ: %f\n", Fx);
	system("pause");
}