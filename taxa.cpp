#include<iostream>
using namespace std;

int main(){

    int preco,aumento;

    cout<<"Insira o preço do produto em R$: ";
    cin>>preco;

    cout<<"O preço final do produto após aumento eh:"<<(preco+(preco*15)/100);
}
