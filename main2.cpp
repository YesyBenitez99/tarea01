#include <stdio.h>
#include <conio.h>

/* Ejercicio No. 2
El siguiente ejemplo muestra el uso de tres rutinas de intercambio de datos diferentes. Digite
(p�ngale extensi�n .cpp a su archivo), compile y ejecute el programa. */

void Intercambio(int, int);
void Intercambio(int *, int *);
void Intercambio(int, int &, int &);
int main() {
 int x = 22, y = 33;
 
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(x,y); // llamada por valor
 
 printf("x = %d\t y = %d\n", x, y);
  Intercambio(1, x, y); // llamada por referencia
  
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(&x, &y); // llamada por puntero
 
 printf("x = %d\t y = %d\n", x, y);
 getch();
}

void Intercambio( int a, int b)
{
 int aux;
 aux = a;
 a = b;
 b = aux;
}
void Intercambio(int *a, int *b)
{
 int aux;
 aux = *a;
 *a = *b;
 *b = aux;
}
void Intercambio( int i, int &a, int &b)
{
 int aux=i;
 aux = a;
 a = b;
 b = aux;
}


/* Como resultado de la llamada a Intercambio por valor (la primera llamada de Intercambio()), �se
cambian los valores de a y b? no  �por qu�? los resultados son correctos  


Despu�s de la segunda llamada a Intercambio() (llamada por referencia), �hubo modificaci�n de a
y b? no    �por qu�?  los resu�tados son iguales a la llamada a intercambio por valor


�Es equivalente la tercer llamada a Intercambio() con la segunda llamada a la misma funci�n? si
  �por qu�? a y b estan inversos 
      
    */

