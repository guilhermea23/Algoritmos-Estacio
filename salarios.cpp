#include<iostream>
using namespace std;

int main(){
    string nome,nome_maior_sal,nome_menor_sal;
    float salario,somasal=0,maior_sal,menor_sal;
    int qtd=0;
    do{
        cout<<"Insira o seu nomes:  ";
        cin>>nome;
        if (nome!="sair"){
            cout<<"Insira o seu salario:  ";
            cin>>salario;
            somasal=somasal+salario;
            if (qtd==0){
                maior_sal=salario;
                menor_sal=salario;
                nome_maior_sal=nome;
                nome_menor_sal=nome;
            }else{
                if (salario>maior_sal){
                    maior_sal=salario;
                    nome_maior_sal=nome;
                }
                if (salario<menor_sal){
                    menor_sal=salario;
                    nome_menor_sal=nome;
                }
            }
            qtd++;
        }
    }while(nome!="sair");


    cout<<"Media:  "<<somasal/qtd<<"\n";
    cout<<"Maior salario e de:  "<<nome_maior_sal<<"\n";
    cout<<"Menor salario e de:  "<<nome_menor_sal<<"\n";
}
