#include <iostream>
using namespace std;
/*Adapte o programa anterior de modo que o novo programa imprima a
quantidade de divisores de x.*/
int main (){

    int x, i=1, n=0;
    cout<<"Digite um numero inteiro positivo: "<<endl;
    cin>>x;

    while(i<=x){
        if(x%i==0){
            n+=1;
        }
            else{
                n=n;
            }
        i++;
    }
    cout<<n<<endl;
}
