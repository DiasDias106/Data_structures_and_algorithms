#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *pHead = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade"; cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return true;
    getData(pnovo);
    pnovo->next = pHead;
    pHead = pnovo;
    return true;
}
void list(){
    el *paux = pHead;
    if(!pHead) cout << "lista esta vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}
