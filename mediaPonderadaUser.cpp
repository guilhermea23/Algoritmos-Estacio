#include<iostream>
using namespace std;

int main(){
    int n1,p1,n2,p2,n3,p3;
    cout<<"Insira a primeira nota: ";
    cin>>n1;
    cout<<"Insira o primeiro peso: ";
    cin>>p1;
    cout<<"Insira a segunda nota";
    cin>>n2;
    cout<<"Insira o segundo peso: ";
    cin>>p2;
    cout<<"Insira a terceira nota";
    cin>>n3;
    cout<<"Insira o terceiro peso: ";
    cin>>p3;

    cout<<"A media final eh: "<<(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
}
