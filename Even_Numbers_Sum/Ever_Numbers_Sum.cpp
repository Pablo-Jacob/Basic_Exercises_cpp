#include <iostream>
using namespace std;

int main()
{
	int n,suma = 0;
	
	for(n=2;n<=20;n+=2) //sin aprovechar el for
	{
		suma += n;
	}
	
	printf("La suma de los 10 primeros numeros pares es: %d",suma);
	
	return 0;
}
