#include<iostream>
#include<string>
using namespace std;
int main(){
    char nome[30],tt[30],tti[60];
    char letra = 't';
    int num = strlen(nome);
    string nome1,nome2,nome3;
    cout << "introduza 2 nomes" <<endl;
    getline(cin,nome1);
    getline(cin,nome2);
    cout << "incira agora os 2 chars" << endl;
    cin.getline(nome,30);
    cin.getline(tt,30);

    cout << nome1.length() << endl;
    cout << nome1.size() << endl;

    nome3 = nome1;
    cout << nome3 << endl;

    nome3 = nome1 + nome2;

    cout << nome3;

    
    cout << strcpy(tti,tt) <<endl;

    cout << tti << endl;

    cout << strcmp(tti,nome) << endl;

    for(size_t i=0;i<num;i++){
        if(nome[i] == letra){
        cout << nome[i];
        }
    }
}