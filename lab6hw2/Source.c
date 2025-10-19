#include <stdio.h>
#include <locale.h>
#include <stdio.h>



void main()
{
	setlocale(LC_CTYPE, "RUS");

	int x, y;

	printf("¬ведите N координаты x, y через пробел: \n");
	scanf("%d", &x);
	scanf("%d", &y);

	if (y <= x + 4 && y <= -x + 4 && y >= 0)
		printf("“очка с координатами (%d; %d) принадлежит закрашенной области.\n", x, y);
	else
		printf("“очка с координатами (%d; %d) не принадлежит закрашенной области.\n", x, y);
	
}