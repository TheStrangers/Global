/*#include "Headers.h"
#include "Semaphore.h"
#include "Test.h"
#include "Schetchic.h"
#include <conio.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>


using namespace std;

int main()
{
	int a = 0;
    CSchetchic s1, s2;
	while (!_kbhit())
	{
		cout << s1.GetVar() << endl;
		s1.PlusVar();
		Sleep(1000);
		
	}

	return 0;
		
}
*/

#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
private:
	unsigned int car;
	double pay;
public:
	tollBooth() : car(0), pay(0)
	{

	}
	void payingCar()
	{
		car++;
		pay = pay + 0.5;
	}
	void nopayCar()
	{
		car++;

	}
	void display()
	{
		cout << "CARS:" << car << endl
			<< "PAYS:" << pay << endl;

	}

};

int main()
{
	class tollBooth car1;

	char cfr;
	do{
		cfr = _getche();
		if (cfr == '0')
		{
			car1.payingCar();
		}
		if (cfr == '1')
		{
			car1.nopayCar();
		}
	} while (cfr!='s');
	car1.display();
	system("pause");
	return(0);

}