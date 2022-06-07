#include<iostream>
using namespace std;

int main(){

    int n1,n2,media;

    cout<<"Insira o valor da primeira nota: ";
    cin>>n1;
    cout<<"Insira o valor da segunda nota: ";
    cin>>n2;

    if (n1<4){
        n1=0;
    }else{
        n1=n1;
    }
    if (n2<4){
        n2=0;
    }else{
        n2=n2;
    }

    media=((n1+n2)/3);
    cout<<"A média final eh:"<<media;
    if (media>5){
        cout<<"\n\n Aprovado!!!!";
    }else{
        cout<<"\n\n Reprovado!!!!";
    }
    if(media<4){
        cout<<"Falta o AV3!!!";
    }
}
