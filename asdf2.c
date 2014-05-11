
#include <stdio.h>

int x = 0;
int y = 0;

void NineToNine()
{
	for(y = 0; y < 10 ; ++y)
	{
		printf("<tr>\n");
		
		for(x = 0;x < 10;++x)
		{
			if(y == 0 && x == 0)
			{
				printf("<th>\n");
			}
			else if(y == 0)
			{
				printf("<th>%d\n",1*x);
			}
			else if(x == 0)
			{
				printf("<th>%d\n",1*y);
			}
			else
			{
				printf("<th>%d\n",x*y);
			}
		}
	}
}

int main()
{
	printf("<!DOCTYPE html>\n");

	printf("<meta charset = \"UTF-8\">\n");

	printf("<title>99</title>\n");

	printf("<h1>99</h1>\n");

	printf("<table>\n");
	
	NineToNine();

	return 0;
}//main};




