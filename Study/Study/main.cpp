#include "Headers.h"
#include "Semaphore.h"
#include "Test.h"
#include "Schetchic.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
    CSchetchic s1, s2;
	while (!_kbhit())
	{
		cout << s1.GetVar() << endl;
		s1.PlusVar();
	}
		return 0;

}