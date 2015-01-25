#include "Schetchic.h"

CSchetchic::CSchetchic() :sch(0)
{

};

int CSchetchic::GetVar()
{
	return sch;
};

void CSchetchic::PlusVar()
{ 
	sch++;
};