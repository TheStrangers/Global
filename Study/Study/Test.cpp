
#include "Test.h"

CYashic::CYashic()
{
	var1 = 0;
	var2 = 0;
};

void CYashic::SetVoid(int Ch1, int Ch2)
{
	var1 = Ch1;
	var2 = Ch2;
};
	void CYashic::GetVoid(int &Ch1,int &Ch2 )
{
	int *tmp1, *tmp2;
		
	tmp1 = &Ch1;
	tmp2 = &Ch2;
	*tmp1 = var1;
	*tmp2 = var2;
}