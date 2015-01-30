#include "Headers.h"
#include "Graph.h"

class CInterface
{
private:
	CGraph *graph;
public:
	CInterface();
	~CInterface();

	int In();
	int Out();
};