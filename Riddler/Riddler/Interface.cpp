#include "Interface.h"


CInterface::CInterface()
{

};

CInterface::~CInterface()
{

};

int CInterface::In()
{
	char answ;

	while (graph->Check())
	{
		printf("Оно %s", graph->Definition());
		scanf_s("%c", &answ);
	}

	
	{
		printf("Какое оно?\n");
		scanf_s("%s", graph->New());
	}
	return 0;
};

int CInterface::Out()
{
	return 0;
};