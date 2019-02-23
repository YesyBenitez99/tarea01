#include <iostream>
using namespace std;

/*Ejercicio No. 1
El siguiente ejercicio muestra que los parámetros pasados por valor se pueden modificar dentro de
la función sin cambiar la variable que representa al parámetro en el llamador. Digite (póngale
extensión .cpp a su archivo), compile y ejecute el programa.*/

 
void DemoLocal( int valor )
{
 cout << "Dentro de DemoLocal, valor =" << valor << endl;
 valor = 75;
 cout << "Dentro de DemoLocal, valor = "<< valor << endl;
}

int main( void)  
{
 int n = 10;
 
 cout << "Antes de llamar a DemoLocal, n= " << n << endl;
 DemoLocal(n);
 cout << "Después de llamar a DemoLocal, n=  "<< n << endl;
 cout <<  "Pulse Intro para continuar";
 cin.get();
 
 
 
}
/*¿Cómo cambia el valor de n, si es que lo hace? 
  el valor de n no cambia 

