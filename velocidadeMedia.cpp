#include<iostream>
using namespace std;

int main(){

int s,t;
cout<<"Insira o espaço a ser percorrido em km: ";
cin>>s;
cout<<"Insira o tempo estimado para percorrer" <<s<<" kms:  ";
cin>>t;

cout<<"A velocidade media para percorrer " <<s<<" kms em "<<t<<" horas �:"<< (s/t) ;
}
