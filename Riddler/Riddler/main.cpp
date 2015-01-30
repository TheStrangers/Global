#include "Headers.h"
#include "Interface.h"

int main()
{
	printf("Start Riddler.\n\n");

	int flag = 0;
	CInterface *Intrfc = new (CInterface);

	while (!flag)
	{
		printf("Загадайте животное.\n");

		flag += Intrfc->In();
		flag += Intrfc->Out();

		printf("Раунд окончен.\n\n");
	}

	printf("Exit Riddler.\n");
	return 0;
}