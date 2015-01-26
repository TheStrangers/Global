void GetMap()
{
	File *f;
	f = fopen(new char[10],br);
	fread(&dat,sizeof(char),1,f);
	fclose(имя логического файла);
}

void SetMap()
{
	for (i = 1; i < n; i++){
		for (j = 1; j < m; j++) {

			if (char map[i,j] = ".")
			{
				int map1[i, j] = 0;
			}
			else if (char map[i, j] = "0")
			{
				int map[i, j] = 1;
			}
			else if (char map[i, j] = "X")
			{
				int map[i, j] = 2;
			}
		}
	}
}