#include <stdio.h>
#include <conio.h>

int main()
{
	int X = 0;
	do
	{
		if (X % 2 == 0)
		{
			printf("%d\n", X);
		}
		X++;
	} while (X <= 30);

	_getch();
	return 0;
}