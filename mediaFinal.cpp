#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    double media;

    cout<<"Insira a primeira nota: ";
    cin>>n1;
    cout<<"Insira a segunda nota: ";
    cin>>n2;
    cout<<"Insira a terceira nota: ";
    cin>>n3;

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
    if(n3<4){
        n3=0;
    }else{
        n3=n3;
    }

    cout<<"A media final eh "<<(n1+n2+n3)/3;
}
