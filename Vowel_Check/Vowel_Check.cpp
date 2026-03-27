#include <iostream>
using namespace std;

bool verificar_vocal(char ingreso)
{
	if
	(
		(ingreso == 'a') || (ingreso == 'A') ||
		(ingreso == 'e') || (ingreso == 'E') ||
		(ingreso == 'i') || (ingreso == 'I') ||
		(ingreso == 'o') || (ingreso == 'O') ||
		(ingreso == 'u') || (ingreso == 'U')
	)
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
	char letra = '0';
	bool verificar_vocalR = false;
	
	printf("Escriba cualquier letra: ");
	cin>>letra;
	
	verificar_vocalR = verificar_vocal(letra);
	
	printf("La letra ingresada es una vocal? ");
	
	if(verificar_vocalR)
	{
		printf("VERDADERO");
	}
	else
	{
		printf("FALSO");
	}
	return 0;
}
