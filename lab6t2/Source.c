#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x;
	printf("������� �����: ");
	scanf("%d", &x);
	float Fx = x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6); //���� �=3 => 9, ���� x = 4 =>0,014286
	printf("�����: %f\n", Fx);
	system("pause");
}