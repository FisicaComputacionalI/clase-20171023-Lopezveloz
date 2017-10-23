//Identificar nùmeros primos
//Autor: Lopezveloz Matinez Itzia
//Creado el 23 de Agosto del 2017
#include <iostream>
using namespace std;
int main()
{
  int N=0;
  int primo=0;
    cout<<"Dame un nùmero entero"<<endl;
  cin>> N;
 for (int i=2;i<=(N/2);i++)
   {
     if ((N%i)==0) {
	 primo=1;
	 break;
       }
   }
 if (primo==0)
   cout<<"Felicidades ¡tu nùmero es primo!"<<endl;
 else
   cout<<"Làstima... tu nùmero no es primo :("<<endl;
 return 0; 
}
