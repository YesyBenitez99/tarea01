#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
char *cad_a=new char[30];
char *cad_b=new char[30];
int i, j;
char temp;
cout<<"Introduce una cadena: "; //pide los datos
cin.getline (cad_a,30);
 
 
for(i=0; i<29; i++)
{   
temp=cad_a[i];
cad_b[29-i]=temp;
}
for(j=0; j<30; j++)
cout<<cad_b[j]<<""; //muesta cadena invertida
if(cad_a==cad_b)

return 0;
}
