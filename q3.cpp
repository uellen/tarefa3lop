#include <iostream>
using namespace std;
/* Adapte o programa anterior de modo que o novo programa imprima uma
mensagem informando se x � ou n�o um n�mero primo. Um n�mero � primo caso
possua exatamente dois divisores.*/
int main(){
        int x, i=1, n=0;
        cout<<"Digite um numero: "<<endl;
        cin>>x;
    while(x>=i){
        if(x%i==0){
            n+=1;
        }
        i++;
    }
        if (n%2==0){
            cout<<x<<" eh um numero primo"<<endl;
        }
            else{
            cout<<x<<" nao eh um numero primo"<<endl;
            }

}
