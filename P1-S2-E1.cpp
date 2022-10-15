//Periodo 1 - Clase 4 - Ejemplo 1
#include <iostream>
using namespace std;

int main(){
	double calificacion;
	cout<<"Ingrese la calificacion: ";
	cin>>calificacion;

	if (calificacion>=90)
	cout<<"A";
	else if (calificacion>=80)
	cout<<"B";	
	else if (calificacion>=70)
	cout<<"C";	
	else if (calificacion>=60)
	cout<<"D";
	else
	cout<<"F";	
	return 0;
}
