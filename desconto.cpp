#include<iostream>
using namespace std;

int main(){

    int preco,desc;

    cout<<"Insira o valor da compra em R$: ";
    cin>>preco;
    cout<<"Insira o valor do desconto em porcentagem: ";
    cin>>desc;

    cout<<"O valor final eh: "<<(preco-(preco*desc)/100);
}
