#include <iostream>
using namespace std;

const int BANDERA = -1;

int main()
{
	int nota = 0;
	int suma = 0;
	int cuenta = 0;
	
	printf("Introduzca una nota: \n");
	cin>>nota;
	
	while(nota != BANDERA)
	{
		cuenta++;
		suma += nota;
		
		printf("Introduzca la siguiente nota, ingrese -1 para salir: \n");
		cin>>nota;
	}
	
	cout<<"La suma de notas es: "<<suma<<endl;
	cout<<"Se ingresaron "<<cuenta<<" notas"<<endl;
	cout<<"El promedio de las notas es: "<<(suma/cuenta)<<endl;
	
	return 0;
}
