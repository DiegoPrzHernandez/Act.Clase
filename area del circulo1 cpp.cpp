///calcular el area y perimetro de un circulo 

#include <iostream>
using namespace std;
int  main ()
{
	float radio,area,perimetro;
	
	cout<<"Ingresa el radio de el circulo: ";
	cin>> radio;
	
	area= 3.1416 * (radio*radio);
	perimetro= 2*radio*3.1416;
	
	cout<<"El area del circulo es: "<<area;
	cout<<endl;
	cout<<"El perimetro de un circulo es "<<perimetro;
	
	return 0;
	
}
