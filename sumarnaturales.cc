//Sumar Nùmeros Naturales
//Autor: Lopezveloz Matinez Itzia
//Creado el 23 de Agosto del 2017
#include <iostream>
using namespace std;
int main()
{
  int N=0;
  int sum=0;
  int i=0
  cout<<"Dame un nùmero natural"<<endl;
  cin>>N;
  for (i=0;i<=N;i++)
    {
      sum=sum+i;
    }
  cout<<"La suma de los naturales hasta tu nùmero es: "<<sum<<endl;
  return 0;
}
