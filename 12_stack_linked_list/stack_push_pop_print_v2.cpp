#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade ;
}

void putData(el *elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
    return true;
}

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    phead->next = phead;
    delete pdel;
    return true;
}
void list(){
    
}