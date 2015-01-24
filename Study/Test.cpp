
#include "Test.h"

CYashic::CYashic()
{
	Var1 = 0;
	Var2 = 0;
};

void CYashic::SetVoid(int Ch1, int Ch2)
{
	var1 = Ch1;
	var2 = Ch2;
};
	void CYashic::GetVoid(int &Ch1,int &Ch2 )
{
		*Ch1 = var1;
		*Ch2 = var2;
}
