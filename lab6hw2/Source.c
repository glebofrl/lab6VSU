#include <stdio.h>
#include <locale.h>
#include <stdio.h>



void main()
{
	setlocale(LC_CTYPE, "RUS");

	int x, y;

	printf("������� N ���������� x, y ����� ������: \n");
	scanf("%d", &x);
	scanf("%d", &y);

	if (y <= x + 4 && y <= -x + 4 && y >= 0)
		printf("����� � ������������ (%d; %d) ����������� ����������� �������.\n", x, y);
	else
		printf("����� � ������������ (%d; %d) �� ����������� ����������� �������.\n", x, y);
	
}