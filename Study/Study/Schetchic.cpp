#include <iostream>

using namespace std;

class CSchetchic
{
private:
	unsigned int sch;
public:
	CSchetchic():sch(0)
	{}
	void GetVar()
	{
		return sch;
	}
	void PlusVar()
	{
		sch++;
	}


};

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