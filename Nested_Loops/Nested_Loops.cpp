#include <iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<4;i++)
	{
		printf("Externo: \t %d\n",i);
		
		for(j=0;j<4;j++)
		{
			printf("Interno:\t\t %d\n",j);
		}
	}//fin ciclo externo
	
	return 0;
}
