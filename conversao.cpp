#include<iostream>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<unistd.h>
#include<algorithm>
using namespace std;
string intTostr(){
    int num, base, rest, len;
    string convertendo;
    cout<<"Digite um numero inteiro decimal para ser convertendo para qualquer outra base:\n[R]: ";
    cin>>num;
    fflush(stdin);
    cout<<"Digite a base para a que o numero sera convertendo:\n[R]: ";
    cin>>base;
    fflush(stdin);
    while(num > 0){
        if(base <= 10){
            rest = num%base;
            num = num/base;
            convertendo = convertendo + to_string(rest);
            len++;
        }else if(base > 10){
            rest = num%base;
            num = num/base;
            if(rest == 10){
                convertendo = convertendo + 'A';
            }else if(rest == 11){
                convertendo = convertendo + 'B';
            }else if(rest == 12){
                convertendo = convertendo + 'C';
            }else if(rest == 13){
                convertendo = convertendo + 'D';
            }else if(rest == 14){
                convertendo = convertendo + 'E';
            }else if(rest == 15){
                convertendo = convertendo + 'F';
            }else{
                convertendo = convertendo + to_string(rest);
            };
            len++;
        };    
    };
    return convertendo;
};

string fpTostr(){
    int base, rest, len = 0;
    int j;
    float num;
    string convertendo, aux;
    cout<<"Digite um numero em ponto flutuante decimal para ser convertendo para qualquer outra base:\n[R]: ";
    cin>>num;
    fflush(stdin);
    cout<<"Digite a base para a que o numero sera convertido:\n[R]: ";
    cin>>base;
    fflush(stdin);
    while(num > 0 && len <= 4){
        if(base <= 10){
            sleep(0.1);
            rest = int(num*base);
            num = (num*base) - rest;
            cout<<num<<"\n";
            convertendo = convertendo + to_string(rest);
            len++;
        }else if(base > 10){
            rest = int(num*base);
            num = num*base;
            if(rest == 10){
                convertendo = convertendo + 'A';
            }else if(rest == 11){
                convertendo = convertendo + 'B';
            }else if(rest == 12){
                convertendo = convertendo + 'C';
            }else if(rest == 13){
                convertendo = convertendo + 'D';
            }else if(rest == 14){
                convertendo = convertendo + 'E';
            }else if(rest == 15){
                convertendo = convertendo + 'F';
            }else{
                convertendo = convertendo + to_string(rest);
            };
            len++;
        };    
    };
    reverse(convertendo.begin(), convertendo.end());
    convertendo = convertendo + ",0";
    return convertendo;
};

int main(){
    int op;
    string convertido;
    cout<<"Escolha um opcao:\n[1] - Transformar um numero inteiro decimal para outra base."<<endl;
    cout<<"[2] - Transformar um numero em ponto flutuante decimal para outra base.\n[R]: ";
    cin>>op;
    system("clear");
    switch(op){
        case 1:
            convertido = intTostr();
            break;
        case 2:
            convertido = fpTostr();
            break;
        default:
            cout<<"Opcao nao existente!!";
            break;
    };
    cout<<"O numero digitado convertido e:\n[R]: ";
    for(int i = convertido.size()-1; i >= 0; i--){
        cout<<convertido[i];
    };
    cout<<"\n";
}