#include "Fmanager.h"

void CFmanager::GetMap()
{
	char rd[20]; 
	FILE *f;
	f = fopen(*rd,"br");
	fread(&dat,sizeof(char),1,f);
	fclose(f);
}

/*void  CFmanager::SetMap()
{

}
*/