#include <iostream>
using namespace std;

bool divisibles(int val1, int val2)
{
	if(val1 % val2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int num1 = 0, num2 = 0;
	bool divisiblesR = false;
	
	printf("Escriba un numero: ");
	cin>>num1;
	printf("Escriba otro numero: ");
	cin>>num2;
	
	divisiblesR = divisibles(num1, num2);
	
	printf("Los numeros son divisibles entre si? ");

	
	if(divisiblesR) {
		printf("VERDADERO");
	}
	else {
		printf("FALSO");
	}	
	return 0;
}
