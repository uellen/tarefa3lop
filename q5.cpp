#include <iostream>
using namespace std;
/*� Implemente um programa que imprima em uma mesma linha da tela cada um
dos d�gitos que comp�em o n�mero n. N�o � necess�rio se preocupar com a ordem
em que cada d�gito � impresso. Exemplo:*/
int main ()
{
    int x, n;
    cout<<"Digite um numero "<<endl;
    cin>>x;

    while(x!=0)
    {
    n=x%10;
    x=x/10;
    cout<<n;
    }
}
