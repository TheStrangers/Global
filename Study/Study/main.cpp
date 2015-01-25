#include "Headers.h"
#include "Semaphore.h"
#include "Test.h"
#include "Schetchic.h"

int main()
{
    CSchetchic s1, s2;
	s1.GetVar();
	s2.GetVar();

	s1.PlusVar();
	s2.PlusVar();
	s2.PlusVar();
	return 0;


}