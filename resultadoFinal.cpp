#include<iostream>
using namespace std;

int main(){

    int n1,n2,media;

    cout<<"Insira o valor da primeira nota: ";
    cin>>n1;
    cout<<"Insira o valor da segunda nota: ";
    cin>>n2;

    media=((n1+n2)/2);
    cout<<"A média final eh:"<<media;
    if (media>5){
        cout<<"\n\n Aprovado!!!!";
    }else{
        cout<<"\n\n Reprovado!!!!";
    }

}
