#include "Schetchic.h"

CSchetchic::CSchetchic() :sch(0)
{

};

unsigned int CSchetchic::GetVar()
{
	return sch;
};

void CSchetchic::PlusVar()
{ 
	sch++;
};