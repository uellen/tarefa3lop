#include <iostream>
using namespace std;
/*Implemente um programa que recebe v�rios n�meros inteiros e calcula a
porcentagem dos n�meros �mpares maiores do que 15 dentre todos os n�meros. O
programa deve encerrar quando for informado o n�mero zero. */
int main()
{
    int x=43, i=0, n=0;
    float prob;
    while(x!=0)
    {
        i++;
        cout<<"Digite um numero: "<<endl;
        cin>>x;
            if(x>15 && x%2==1)
            {
                n+=1;
            }
    }
    prob =(((float) n/i)*100);
    cout<<"-------------------------------RESULTADOS-------------------------------------"<<endl;
    cout<<"1. Numero de recorrencias do numeros impares maiores que 15: "<<n<<" unidades"<<endl;
    cout<<"2. Campo amostral "<<i<<" unidades"<<endl;
    cout<<"3. A probabilidade de um numero impar e maior que 15 eh de "<<prob<<"%"<<endl;
}
