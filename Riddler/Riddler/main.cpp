#include "Headers.h"
#include "Interface.h"

int main()
{
	printf("Start Riddler.\n");

	int flag = 0;
	CInterface *Intrfc = new (CInterface);

	while (!flag)
	{
		flag += Intrfc->In();
		flag += Intrfc->Out();
	}

	printf("Exit Riddler.\n");
	return 0;
}